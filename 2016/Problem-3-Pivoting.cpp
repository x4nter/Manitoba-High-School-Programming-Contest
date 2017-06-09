#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int nNums, pivot;
		cin >> nNums >> pivot;
		vector<int> small, big;
		for (int j = 0; j < nNums; j++) {
			int temp;
			cin >> temp;
			if (temp <= pivot)
				small.push_back(temp);
			else big.push_back(temp);
		}
		cout << "-CASE " << i + 1 << "-" << endl;
		for (int j = 0; j < small.size(); j++) {
			cout << small[j];
			if (j < small.size() - 1)
				cout << " ";
			else cout << endl;
		}
		for (int j = 0; j < big.size(); j++) {
			cout << big[j];
			if (j < big.size() - 1)
				cout << " ";
			else cout << endl;
		}
	}
	return 0;
}
