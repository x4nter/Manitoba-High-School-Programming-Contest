#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

vector<int> s_set, t_set, both, either;

void search() {
	for (int i = 0; i < s_set.size(); i++) {
		if (find(t_set.begin(), t_set.end(), s_set[i]) != t_set.end())
			both.push_back(s_set[i]);
	}
	either = both;
	for (int i = 0; i < s_set.size(); i++) {
		if (find(both.begin(), both.end(), s_set[i]) == both.end())
			either.push_back(s_set[i]);
	}
	for (int i = 0; i < t_set.size(); i++) {
		if (find(both.begin(), both.end(), t_set[i]) == both.end())
			either.push_back(t_set[i]);
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		s_set.clear();
		t_set.clear();
		both.clear();
		either.clear();
		int s, t;
		cin >> s >> t;
		for (int j = 0; j < s; j++) {
			int temp;
			cin >> temp;
			s_set.push_back(temp);
		}
		for (int j = 0; j < t; j++) {
			int temp;
			cin >> temp;
			t_set.push_back(temp);
		}
		search();
		cout << i + 1 << ". Jaccard Index: " << setprecision(1) << fixed << (double)both.size() / (double)either.size() << endl;
	}
	return 0;
}
