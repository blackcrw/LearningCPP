#include <iostream>
#include <cstdlib>

using namespace std;

#define BANNER cout << "---------- Welcome to the wallet! ----------" << endl << "1 - Add money" << endl << "2 - Remove money" << endl << "3 - Show wallet" << endl << "4 - Exit" << endl << "---------------------------------------------" << endl

int main() {
    float wallet = 0;
    int option;

    initial:

    system("clear");

    BANNER;

    cout << "Option: ";
    cin >> option;

    cout << endl;

    if (option == 1) {
        cout << "How much money do you want to add? ";
        cin >> wallet;

        goto initial;
    } else if (option == 2) {
        cout << "How much money do you want to remove? ";
        cin >> wallet;

        goto initial;
    } else if (option == 3) {
        if (wallet == 0) cout << "Your wallet is empty." << endl;
        else cout << "Your wallet has " << wallet << " xmr." << endl;

        cout << endl;

        system("read -p 'Press Enter to continue...'");

        goto initial;
    } else if (option == 4) {
        cout << "Exiting..." << endl;
        return 0;
    } else {
        cout << "Invalid option." << endl << endl;
        
        system("read -p 'Press Enter to continue...'");

        goto initial;
    }

    return 0;
}