#include <iostream>
#include <string>

using namespace std;

/*
    Tanto o tipo int quanto float, ele só vai liberar 4 bytes na memória para alocar essa variável...
    Caso haja a necessidade de guardar números muito grandes utilize double.

    por exemplo:

    double number_double = 9999999999999.99999999999;
    cout << "Numero muito grande: " << number_double << endl;

    ————————————
    
    Na linguagem C, definimos variáveis usando uma lista de char.
    Por mais que no C++ tenha como fazer desta forma... não é algo necessário ou importante! Visto que existe a lib string, que faz esse papel.

    Exemplo no C:

    char name[8] = "blackcrw"; //  Caso você coloque mais de 8 caracteres irá ocorrer um buffer overflow.

    Exemplo C++:
    
    #include <string> // importe a lib string

    string name = "blackcrw";
*/

int main() {
    /*
	  int kmh;
      kmh = 80;
    */

	int kmh = 80;
	float km = 142.9;
    double number_double = 9999999999999.99999999999;
	char letter = 'a'; 	// O char vai alocar de 0 a 255 bytes.
	string name = "blackcrw";

	cout << "Velocidade do carro: " << kmh << " KM/H." << endl;
	cout << "KM Rodados: " << km << endl;
    cout << "Numero muito grande: " << number_double << endl;
	cout << "A letra: " << letter << endl;
	cout << "Meu nome: " << name << endl;

	return 0;
}


