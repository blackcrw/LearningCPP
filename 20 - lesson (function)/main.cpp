#include <iostream>

using namespace std;

void banner();
void sum(int num_one, int num_two);
int sub(int num_one, int num_two);

int main() {
    banner();
    sum(5, 10); // 15

    int result = sub(10, 5);

    cout << "10 - 5 = " << result << endl;

    return 0;
}

void banner() {
    cout << "---------------------" << endl;
    cout << "      SUM CALC       " << endl;
    cout << "---------------------" << endl;
}

void sum(int num_one, int num_two) {
    cout << num_one << " + " << num_two << " = " << num_one + num_two << endl << endl;
}

int sub(int num_one, int num_two) {
    return num_one - num_two;
}