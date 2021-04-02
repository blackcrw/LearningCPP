#include <iostream>

using namespace std;

int main() {
    int x, y;

    int addition, subtraction, multiplication;
    float division, remnant;

    cout << "Primeiro valor ? ";
    cin >> x;

    cout << "Segundo valor ? ";
    cin >> y;

    addition = x + y;
    subtraction = x - y;
    multiplication = x * y;
    division = x / y;
    remnant = x % y;

    cout << "Adição: " << addition << endl;
    cout << "Subtração: " << subtraction << endl;
    cout << "Multiplicação: " << multiplication << endl;
    cout << "Divisão: " << division << endl;
    cout << "Resto: " << remnant << endl;

    /*
      printf("%d + %d = %d\n", x, y, x + y);
      printf("%d - %d = %d\n", x, y, x - y);
      printf("%d x %d = %d\n", x, y, x * y);
      printf("%d / %d = %d\n", x, y, x / y);
      printf("%d % %d = %d\n", x, y, x % y);
    */
    
    return 0;
}