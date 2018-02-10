//This solution uses the concept of graphs and performing Breadth First Search(BFS) on a graph
#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> matrix;

bool wayHome(int start_node) {
	vector<int> queue;
	vector<bool> visited(matrix.size());
	queue.insert(queue.begin(), start_node);
	while (!queue.empty()) {
		int curr_node = queue.back();
		queue.pop_back();
		visited[curr_node] = true;
		for (int i = 0; i < matrix[curr_node].size(); i++) {
			if (matrix[curr_node][i] && !visited[i])
				queue.insert(queue.begin(), i);
		}
	}
	return visited[0];
}

int main() {
	int resorts;
	cin >> resorts;
	for(int i = 0; i < resorts; i++){
		matrix.clear();
		int nLocations, lifts;
		bool way = true;
		cin >> nLocations >> lifts;
		matrix.resize(nLocations);
		for (int j = 0; j < matrix.size(); j++)
			matrix[j].resize(nLocations);
		for (int j = 0; j < lifts; j++) {
			int start, end;
			cin >> start >> end;
			matrix[start][end] = true;
		}
		for (int j = 1; j < nLocations; j++) {
			if (!wayHome(j)) {
				way = false;
				break;
			}
		}
		cout << "CASE " << i + 1 << ": ";
		if(way) cout << "home safe" << endl;
		else cout << "stranded" << endl;
	}
	return 0;
}
