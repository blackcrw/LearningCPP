#include <iostream>

using namespace std;

int main() {
    int option, number=0;


    // The while loop is used to repeat a block of code as long as the condition is true.
    while(number++ < 10){
        cout << "Number: " << number << endl; // The number will be printed from 1 to 10.

        if(number == 10) break; 
    }
    
    cout << "Finished!" << endl;

    return 0;
}