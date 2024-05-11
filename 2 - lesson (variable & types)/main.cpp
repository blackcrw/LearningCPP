#include <iostream>
#include <string>

using namespace std;

/*
    Both the int and float types will only allocate 4 bytes in memory to store these variables...
    If there is a need to store very large numbers, use double.

    For example:

    double number_double = 9999999999999.99999999999;
    cout << "Very large number: " << number_double << endl;

    ————————————

    In the C language, we define variables using a char array.
    Although it is possible to do this in C++, it is not necessary or important! Since there is the string library that serves this purpose.

    Example in C:

    char name[8] = "blackcrw"; // If you put more than 8 characters, a buffer overflow will occur.

    Example in C++:

    #include <string> // import the string library

    string name = "blackcrw";
*/

int main() {
    int kmh = 80;
    float km = 142.9;
    double number_double = 9999999999999.99999999999;
    char letter = 'a';     // The char will allocate from 0 to 255 bytes.
    string name = "blackcrw";

    cout << "Car speed: " << kmh << " KM/H." << endl;
    cout << "Kilometers driven: " << km << endl;
    cout << "Very large number: " << number_double << endl;
    cout << "The letter: " << letter << endl;
    cout << "My name: " << name << endl;

    return 0;
}


