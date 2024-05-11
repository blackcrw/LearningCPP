#include <iostream>

using namespace std;

int main() {
    int number, number_x;

    number_x = 10;

    cout << "Enter a number: ";
    cin >> number;

    // Check if the entered number is equal to number_x using the ternary operator
    cout << "The number is " << (number == number_x ? "equal" : "different") << " to " << number_x << "." << endl;

    // Increment or decrement number_x based on the condition using the ternary operator
    (number >= 10) ? number_x++ : number_x--;

    cout << "The number_x is now " << number_x << "." << endl;

    return 0;
}