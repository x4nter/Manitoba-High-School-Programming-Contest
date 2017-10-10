#include <iostream>

int main(){
    for(int l = 1; l < 21; l++){
        int h = l + 1, w = h + 1;
        std::cout << l * h * w << std::endl;
    }
    return 0;
}
