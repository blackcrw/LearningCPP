#include <iostream>
#include <cstdlib>

using namespace std;

#define BANNER cout << "---------- Welcome to the transport! ----------" << endl << "1 - Bus" << endl << "2 - Uber" << endl << "3 - Taxi" << endl << "4 - Exit" << endl << "---------------------------------------------" << endl

int main() {
    int option;

    initial:

    system("clear");

    BANNER;

    cout << "Option: ";
    cin >> option;

    cout << endl;

    switch (option) {
        case 1:
            cout << "You chose the bus." << endl;
            break;
        case 2:
            cout << "You chose Uber." << endl;
            break;
        case 3:
            cout << "You chose the taxi." << endl;
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option." << endl << endl;
            
            system("read -p 'Press Enter to continue...'");

            goto initial;
    }

    return 0;
}