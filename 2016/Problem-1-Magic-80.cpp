#include <iostream>

using namespace std;

int main(){
    for(int i = 18; i <= 81; i++){
        int age = i, worked = 0;
        while(age + worked < 80){
            age++;
            worked++;
        }
        cout << "If you are " << i << " you can retire at age " << age << endl;
    }
}
