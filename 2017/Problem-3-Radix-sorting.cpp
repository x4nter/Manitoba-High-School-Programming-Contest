#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int position;

bool compare(int x, int y) {
	string a = to_string(x), b = to_string(y);
	return a[a.size() - position] < b[b.size() - position];
}

int main() {
	while (true) {
		int nNums;
		vector<int> nums;
		cin >> nNums >> position;
		if (nNums == 0 && position == 0)
			break;
		for (int i = 0; i < nNums; i++) {
			int n;
			cin >> n;
			nums.push_back(n);
		}
		stable_sort(nums.begin(), nums.end(), compare);
		for (int i = 0; i < nums.size(); i++) {
			if (i == nums.size() - 1)
				cout << nums[i] << endl;
			else cout << nums[i] << " ";
		}
	}
	return 0;
}
