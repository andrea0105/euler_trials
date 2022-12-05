#include <iostream>

int main() {
    
    int number = 1000;
    int sum = 0;

    for(int i = 1; i < number; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            //std::cout << i << std::endl;
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}