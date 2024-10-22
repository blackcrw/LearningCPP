#include <iostream>

using namespace std;

int main() {
    enum clothes{shirts=10, pants=29, shorts=15};

    cout << "$ Clothing Store $" << endl << endl;
    
    clothes clothes_price = shirts;
    cout << "Shirts: $" << clothes_price << endl;

    clothes_price = pants;
    cout << "Pants: $" << clothes_price << endl;

    clothes_price = shorts;
    cout << "Shorts: $" << clothes_price << endl;


    return 0;
}