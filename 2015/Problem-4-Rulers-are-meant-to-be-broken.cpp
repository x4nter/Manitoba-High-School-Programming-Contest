#include <iostream>

using namespace std;

int main() {
	int n, nCase = 0;
	while (cin >> n) {
		if (n == 0) break;
		nCase++;
		cout << "=CASE " << nCase << "=" << endl;
		int width = pow(2, n) + 1, height = n + 1, gap = 0;
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				cout << "|";
				if (j != width - 1)
					for(int k = 0; k < gap; k++)
						cout << " ";
				else cout << endl;
			}
			width = width / 2 + 1;
			gap = gap * 2 + 1;
		}
	}
	return 0;
}
