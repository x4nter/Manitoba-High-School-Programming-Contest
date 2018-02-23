#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int nBids;
		cin >> nBids;
		vector<double> bids;
		for (int j = 0; j < nBids; j++) {
			double temp;
			cin >> temp;
			bids.push_back(temp);
		}
		double price;
		cin >> price;
		bool under = false;
		double closest = 0;
		for (int j = 0; j < bids.size(); j++) {
			if (bids[j] <= price) {
				under = true;
				if ((price - bids[j]) < (price - closest))
					closest = bids[j];
			}
		}
		cout << "Case " << i + 1 << ": ";
		if (!under)
			cout << "Everyone went over." << endl;
		else if (closest == price)
			cout << "Correct bid: " << closest << endl;
		else cout << "Closest bid: " << closest << endl;
	}
	return 0;
}
