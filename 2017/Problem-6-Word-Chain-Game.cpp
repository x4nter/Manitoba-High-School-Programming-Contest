#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool findChar(vector<char> chars, char c) {
	for (int i = 0; i < chars.size(); i++)
		if (chars[i] == c) return true;
	return false;
}

int main() {
	int n, count = 1;
	while (cin >> n) {
		if (n == 0) break;
		vector<string> words;
		for (int i = 0; i < n; i++) {
			string s;
			getline(cin, s);
			words.push_back(s);
		}
		int games = 0;
		while (words.size() != 0) {
			vector<char> available;
			available.push_back(words[0].front());
			if(words[0].back() != words[0].front())
				available.push_back(words[0].back());
			words.erase(words.begin(), words.begin() + 1);
			for (int i = 0; i < words.size(); i++) {
				if (findChar(available, words[i].front())) {
					if (!findChar(available, words[i].back()))
						available.push_back(words[i].back());
					words.erase(words.begin() + i, words.begin() + i + 1);
					i--;
				}
				else if (findChar(available, words[i].back())) {
					if (!findChar(available, words[i].front()))
						available.push_back(words[i].front());
					words.erase(words.begin() + i, words.begin() + i + 1);
					i--;
				}
			}
			games++;
		}
		cout << "Case #" << count << ": " << games << endl;
		count++;
	}
	return 0;
}
