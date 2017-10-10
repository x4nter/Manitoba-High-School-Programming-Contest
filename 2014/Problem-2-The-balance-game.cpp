#include <iostream>

using namespace std;

int main(){
    int n, bal = 0, p1 = 0, p2 = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int w;
        cin >> w;
        if((bal += w) == 0){
            if(i % 2) p2++;
            else p1++;
        }
    }
    cout << "Player 1 scored " << p1 << endl << "Player 2 scored " << p2 << endl;
    return 0;
}
