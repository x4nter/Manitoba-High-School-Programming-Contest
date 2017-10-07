#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	string line;
	int n = 1;
	while (1) {
		getline(cin, line);
		if (line == "") break;
		istringstream iss(line);
		int num;
		vector<vector<int>> list;
		while (iss >> num) {
			vector<int> newNum = { num, 0 };
			for (int i = 0; i < list.size(); i++) {
				if (list[i][0] == num) {
					list[i][1]++;
					goto comeHere;
				}
			}
			list.push_back(newNum);
		comeHere:;
		}
		vector<int> max = list[0];
		for (int i = 0; i < list.size(); i++)
			if (list[i][1] > max[1]) max = list[i];
		cout << "CASE " << n << ": " << max[0] << endl;
		n++;
	}
	return 0;
}
