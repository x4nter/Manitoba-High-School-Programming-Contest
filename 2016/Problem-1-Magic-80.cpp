#include <iostream>

int main(){
    for(int i = 18; i <= 81; i++){
        int age = i, worked = 0;
        while(age + worked < 80){
            age++;
            worked++;
        }
        std::cout << "If you are " << i << " you can retire at age " << age << std::endl;
    }
}
