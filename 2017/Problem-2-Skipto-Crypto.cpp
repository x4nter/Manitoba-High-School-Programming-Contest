#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	int nCase = 0;
	while (getline(cin, input)) {
		if (input == "0")
			break;
		cout << "Case #" << nCase << ": ";
		for (int i = 0; i < input.size() - 1; i++) {
			if (input[i] == '0')
				break;
			i += input[i] - '0';
			if (input[i] == '_')
				cout << " ";
			else cout << input[i];
		}
		cout << endl;
		nCase++;
	}
	return 0;
}
