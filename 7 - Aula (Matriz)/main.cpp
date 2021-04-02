#include <iostream>

int main() {
    for(int i = 0; i <= 10; i++) {
        for(int j = 0; j <= 10; j++) {
            std::cout << "(" << i << "," << j << ") ";
        }
        std::cout << std::endl;
    }

    return 0;
}