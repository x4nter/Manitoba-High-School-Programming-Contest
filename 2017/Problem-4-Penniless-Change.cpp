#include <iostream>

using namespace std;

int roundOff(int value) {
	int lastDigit = value % 10;
	if (lastDigit <= 2)
		value -= lastDigit;
	else if (lastDigit <= 7)
		value = value - lastDigit + 5;
	else if (lastDigit <= 9)
		value = value - lastDigit + 10;
	return value;
}

void printCoins(int value) {
	int _200, _100, _25, _10, _5, remaining;
	_200 = value / 200;
	remaining = value % 200;
	_100 = remaining / 100;
	remaining %= 100;
	_25 = remaining / 25;
	remaining %= 25;
	_10 = remaining / 10;
	remaining %= 10;
	_5 = remaining / 5;
	cout << _200 << "*200 " << _100 << "*100 " << _25 << "*25 " << _10 << "*10 " << _5 << "*5" << endl;
}

int main() {
	int n, cost, payment, change;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cost >> payment;
		change = roundOff(payment - cost);
		cout << "Case #" << i + 1 << ": ";
		printCoins(change);
	}
}
