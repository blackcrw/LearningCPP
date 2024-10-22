#include <iostream>

using namespace std;

int main() {
    int option, number=0;

    // The do while loop is similar to the while loop, but the difference is that the do while loop will always run at least once.
    do {
        cout << "Number: " << number << endl; // The number will be printed from 0 to 10.

        if(number == 10) break;
    } while(number++ < 10);
    
    cout << "Finished!" << endl;

    return 0;
}