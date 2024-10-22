#include <iostream>

using namespace std;

void sum();
int sum(int num_one, int num_two);

int main() {

    sum();
    
    cout << sum(10, 20) << endl;

    return 0;
}

void sum() {
    int resp, num_one, num_two;

    num_one = 10;
    num_two = 20;

    resp = num_one + num_two;

    cout << "The sum of " << num_one << " and " << num_two << " is " << resp << endl;
}

int sum(int num_one, int num_two) {
    return num_one + num_two;
}