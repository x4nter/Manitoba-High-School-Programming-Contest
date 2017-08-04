#include <iostream>
#include <string>

using namespace std;

int main() {
	int x, y, z, p, count = 0;
	for (int i = 0; cin >> x >> y >> z; i++) {
		if (x == 0 && y == 0 && z == 0)
			break;
		p = x*y*z;
		string s = to_string(p);
		for (int i = 0; i < s.size(); i++)
			if (s[i] - 48 == x) count++;
		cout << "CASE " << i  << ": " << p << " ";
		count == y ? cout << "yes" : cout << "no";
		cout << endl;
	}
	return 0;
}
