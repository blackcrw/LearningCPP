#include <iostream>

using namespace std;

void count(int num, int cont=0);

int main() {

    count(20);

    return 0;
}

void count(int num, int cont) {
    cout << cont << endl;

    if(num > cont){
        count(num, ++cont);
    }
}