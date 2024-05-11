#include <iostream>

using namespace std;

int main() {
    int vector[5] = {10, 20, 30, 40, 50};

    for(int i=0; i < sizeof(vector) / 4; i++) cout << "Vector[" << i << "]: " << vector[i] << endl;
}
