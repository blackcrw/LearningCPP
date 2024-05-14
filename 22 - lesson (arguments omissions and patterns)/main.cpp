#include <iostream>
#include <string>

using namespace std;

void welcome(string name = "Guest");

int main() {
    welcome("John");
    welcome();
    
    return 0;
}

void welcome(string name) {
    cout << "Welcome " << name << endl;
}