#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num, evenSteps = 0, oddSteps = 0;
        cin >> num;
        cout << i + 1 << ". The number " << num << " needs ";
        while(num != 1){
            if(num % 2){
                num = num * 3 + 1;
                oddSteps++;
            }
            else {
                num /= 2;
                evenSteps++;
            }
        }
        cout << oddSteps << " odd steps and " << evenSteps << " even steps." << endl;
    }
    return 0;
}
