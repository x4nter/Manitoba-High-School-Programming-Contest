#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		int width, height;
		cin >> width >> height;
		cin.ignore();
		vector<string> image;
		for (int i = 0; i < height; i++) {
			string s;
			getline(cin, s);
			image.push_back(s);
		}
		cout << k + 1 << endl;
		for (int i = 0; i < height; i++) {
			for (int j = image[i].size() - 1; j >= 0; j--) {
				cout << image[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
