#include <iostream>

using namespace std;

int main() {
    int number = 4;

    if(number == 1) {
        cout << "The number is equal to 1" << endl;
    } else if(number > 2 && number < 5) {
        cout << "The number is greater than 1 and less than 5" << endl;
    } else {
        cout << "The number is " << number << endl;
    }

    return 0;
}