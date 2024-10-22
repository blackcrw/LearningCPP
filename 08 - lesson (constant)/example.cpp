/**
 * @brief This program demonstrates the usage of constants in C++.
 * 
 * The program defines a constant PI with a value of 3.14159 using the preprocessor directive #define.
 * It also defines a constant BANNER which prints a welcome message to the console.
 * The main function calls the BANNER macro and then prints the value of PI.
 * 
 * @return 0 indicating successful execution of the program.
 */

#include <iostream>

using namespace std;

#define PI 3.14159
#define BANNER cout << "Welcome to the C++ Programming Course!" << endl << endl;

int main() {
    BANNER

    cout << "The value of PI is: " << PI << endl;

    return 0;
}