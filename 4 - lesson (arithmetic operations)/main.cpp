#include <iostream>

using namespace std;

/**
 * The main function is the entry point of the program.
 * It performs arithmetic operations on two user-inputted values and displays the results.
 *
 * @return 0 indicating successful execution of the program.
 */
int main() {
  int x, y;

  int addition, subtraction, multiplication;
  float division, remainder;

  cout << "First value? ";
  cin >> x;

  cout << "Second value? ";
  cin >> y;

  addition = x + y;
  subtraction = x - y;
  multiplication = x * y;
  division = x / y;
  remainder = x % y;

  cout << "Addition: " << addition << endl;
  cout << "Subtraction: " << subtraction << endl;
  cout << "Multiplication: " << multiplication << endl;
  cout << "Division: " << division << endl;
  cout << "Remainder: " << remainder << endl;

  /*
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d x %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d % %d = %d\n", x, y, x % y);
  */
  
  return 0;
}