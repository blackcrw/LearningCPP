#include <iostream>
#include <stack>

using namespace std;

/*
Imagine a ilustração abaixo como um tubo representando uma stack (pilha):
__   __
|  o  |  - 3º elemento (último a entrar)
|  o  |  - 2º elemento
|  o  |  - 1º elemento (primeiro a entrar)
|_____|

Na pilha, os elementos são adicionados (push) e removidos (pop) seguindo
o princípio LIFO (Last In, First Out). Ou seja, o último elemento que entra (3º)
será o primeiro a sair, e o primeiro a ser incluído (1º) será o último a sair.
*/

int main() {
    stack <string> tube;

    string stack_empty = tube.empty() ? "[!] stack is empty" : "[?] stack not empty";

    cout << stack_empty << endl;

    // adicionando bolas a pilha
    tube.push("ball one");     // ---| 
    tube.push("ball two");    // --| |
    tube.push("ball three"); // -| | |
     //                          | | |
    //   __   __                 | | |
   //    |  o  | - ball three <--| | | (primeiro a sair da stack)
  //     |  o  | - ball two  <-----| |
 //      |  o  | - ball one <--------| (último a sair da stack)
//       |_____|

    cout << "[+] size of stack tube: " << tube.size() << endl;
    cout << "[+] element top of stack tube: " << tube.top() << endl;

    // remove o último elemento incluido na stack, ou seja, remove o elemento "ball three".
    tube.pop(); // a cada `pop()` que eu realizar na stack tube eu irei remover o último elemento adicionado.
    // ou seja, se eu executar o pop() novamente eu irei remover o elemento "ball two".

    cout << "[+] size of stack tube: " << tube.size() << endl;
    cout << "[+] element top of stack tube: " << tube.top() << endl;

    tube.pop(); // removendo o elemento "ball two".

    cout << "[+] size of stack tube: " << tube.size() << endl;
    cout << "[+] element top of stack tube: " << tube.top() << endl << endl;
    
    // remove todos os elementos da pilha
    while(!tube.empty()) {
        tube.pop();
    }
    
    cout << "[+] size of stack tube: " << tube.size() << endl;

    return 0;
}