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
	int nLocations, lifts;
	cin >> nLocations >> lifts;
	matrix.resize(nLocations);
	for (int i = 0; i < matrix.size(); i++)
		matrix[i].resize(nLocations);
	for (int i = 0; i < lifts; i++) {
		int start, end;
		cin >> start >> end;
		matrix[start][end] = true;
	}
	for (int i = 1; i < nLocations; i++) {
		if (!wayHome(i)) {
			cout << "stranded" << endl;
			return 0;
		}
	}
	cout << "home safe" << endl;
	return 0;
}
