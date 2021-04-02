#include <iostream>

using namespace std;

int main() {
    int number = 4;

    if(number == 1) {
        cout << "O numero é igual a 1" << endl;
    } else if(number > 2 && number < 5) {
        cout << "O numero é maior que 1 e menor que 5" << endl;
    } else {
        cout << "O numero é " << number << endl;
    }

    return 0;
}