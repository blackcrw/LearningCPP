#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;    
    int years_old;

    cout << "Qual seu nome ? ";
    cin >> name;

    cout << "Qual sua idade ? ";
    cin >> years_old;

    cout << endl;
    
    cout << "Seu nome é: " << name << endl;
    cout << "Sua idade é: " << years_old << endl;

    return 0;
}