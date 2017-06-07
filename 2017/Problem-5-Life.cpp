#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> lifecycle(vector<string> grid, int t) {
	for (int k = 0; k < t; k++) {
		vector<string> tempGrid = grid;
		for (int i = 0; i < grid.size(); i++) {
			for (int j = 0; j < grid[i].size(); j++) {
				int neighbors = 0;
				if (j - 1 >= 0 && grid[i][j - 1] == 'X') neighbors++;
				if (j + 1 < grid.size() && grid[i][j + 1] == 'X') neighbors++;
				if (i - 1 >= 0 && grid[i - 1][j] == 'X') neighbors++;
				if (i - 1 >= 0 && j - 1 >= 0 && grid[i - 1][j - 1] == 'X') neighbors++;
				if (i - 1 >= 0 && j + 1 < grid.size() && grid[i - 1][j + 1] == 'X') neighbors++;
				if (i + 1 < grid.size() && grid[i + 1][j] == 'X') neighbors++;
				if (i + 1 < grid.size() && j - 1 >= 0 && grid[i + 1][j - 1] == 'X') neighbors++;
				if (i + 1 < grid.size() && j + 1 < grid.size() && grid[i + 1][j + 1] == 'X') neighbors++;
				if (grid[i][j] == 'X' && (neighbors < 2 || neighbors > 3))
					tempGrid[i][j] = '_';
				else if (grid[i][j] == '_' && neighbors == 3)
					tempGrid[i][j] = 'X';
			}
		}
		grid = tempGrid;
	}
	return grid;
}

int main() {
	int n, size, time;
	cin >> n;
	vector<string> grid;
	for (int i = 0; i < n; i++) {
		cin >> size >> time;
		for (int j = 0; j < size; j++) {
			string temp;
			cin >> temp;
			grid.push_back(temp);
		}
		grid = lifecycle(grid, time);
		cout << "CASE " << i << endl;
		for (int j = 0; j < grid.size(); j++)
			cout << grid[j] << endl;
		grid.clear();
	}
	return 0;
}
