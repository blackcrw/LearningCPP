#include <iostream>

using namespace std;

int main() {
    string operation;

    operation = "number_one = number_one + 10\n" // increment by 1
                "number_one += 10\n" // simple increment by 1
                "number_one++\n" // post-fixed increment
                "++number_one"; // pre-fixed increment

    cout << operation << endl << endl;

    int number_one = 10;

    cout << "number_one = " << --number_one << endl; // pre-fixed decrement

    number_one = 10;

    cout << "number_one = " << number_one-- << endl; // post-fixed decrement
    cout << "number_one = " << number_one << endl;

    return 0;
}