#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int m;
	cin >> m;
	for (int k = 0; k < m; k++) {
		int n;
		cin >> n;
		vector<vector<char>> grid;
		for (int i = 0; i < n; i++) {
			vector<char> temp;
			for (int j = 0; j < n; j++) {
				char c;
				cin >> c;
				temp.push_back(c);
			}
			grid.push_back(temp);
		}
		vector<char> across, down;
		for (int i = 0; i < n; i++) {
			bool first = true;
			for (int j = 0; j < n; j++) {
				if (first && grid[i][j] != '_' && grid[i][j] != '#') {
					across.push_back(grid[i][j]);
					first = false;
				}
				else if (grid[i][j] == '#') first = true;
			}
		}
		for (int i = 0; i < n; i++) {
			bool first = true;
			for (int j = 0; j < n; j++) {
				if (first && grid[j][i] != '_' && grid[j][i] != '#') {
					down.push_back(grid[j][i]);
					first = false;
				}
				else if (grid[j][i] == '#') first = true;
			}
		}
		sort(across.begin(), across.end());
		sort(down.begin(), down.end());
		cout << "Case " << k + 1 << ":" << endl << "ACROSS:";
		for (int i = 0; i < across.size(); i++) cout << " " << across[i];
		cout << endl << "DOWN:";
		for (int i = 0; i < down.size(); i++) cout << " " << down[i];
		cout << endl;
	}
	return 0;
}
