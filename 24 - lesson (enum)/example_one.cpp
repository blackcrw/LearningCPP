#include <iostream>

using namespace std;

int main() {
    enum guns{rifle=60, pistol=9, shotgun=12};

    guns guns_sel;

    guns_sel = rifle;
    cout << guns_sel << endl;

    guns_sel = pistol;
    cout << guns_sel << endl;

    guns_sel = shotgun;
    cout << guns_sel << endl;
 
    return 0;
}