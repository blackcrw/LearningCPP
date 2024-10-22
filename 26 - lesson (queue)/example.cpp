#include <iostream>
#include <queue>

using namespace std;

/*
enquanto na stack o último a entrar é o primeiro a sair (LIFO), na queue quem
chega primeiro é o primeiro a sair, igual fila de banco. Em vez de "furar fila",
aqui é FIFO (First In, First Out).
*/

int main() {
    queue<string> tube;

    // enfileirando as bolas
    tube.push("ball one");     //---------|
    tube.push("ball two");    //--------| |
    tube.push("ball three"); //-------| | |
    tube.push("ball for");  //------| | | |
        //                          | | | |
       // |-   -|                   | | | |
      //  |  o  | <- ball for   <---| | | | (último a entrar, último a sair)
     //   |  o  | <- ball three <-----| | |
    //    |  o  | <- ball two   <-------| |
   //     |  o  | <- ball one   <---------| (primeiro a entrar, primeiro a sair)
  //      |-   -|
 //
// utilizando o método `pop()`, sempre iremos remover o primeiro elemento da fila.

    cout << "[*] queue size: " << tube.size() << endl;
    cout << "[*] front element: " << tube.front() << endl;
    cout << "[*] back element: " << tube.back() << endl;

    // remove o primeiro elemento ("ball one")
    tube.pop();  
    cout << "[*] queue size after pop: " << tube.size() << endl;
    cout << "[*] front element after pop: " << tube.front() << endl;
    cout << "[*] back element after pop: " << tube.back() << endl;

    // remove o próximo ("ball two")
    tube.pop();  
    cout << "[*] queue size after second pop: " << tube.size() << endl;
    cout << "[*] front element after second pop: " << tube.front() << endl;
    cout << "[*] back element after second pop: " << tube.back() << endl;

    while(!tube.empty()) {
        cout << "[!] removing \"" << tube.front() << "\" from the queue." << endl;
        tube.pop();
    }

    return 0;
}
