#include <iostream>
#include <string>

using namespace std;

/**
 * The main function is the entry point of the program.
 * It prompts the user to enter their name and age, and then displays the entered values.
 * 
 * @return 0 indicating successful execution of the program.
 */
int main() {
    string name;
    int years_old;

    cout << "What is your name? ";
    cin >> name;

    cout << "What is your age? ";
    cin >> years_old;

    cout << endl;
    
    cout << "Your name is: " << name << endl;
    cout << "Your age is: " << years_old << endl;

    return 0;
}