#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lesson;
    int lesson_increment = 10;

    // insere elementos no final da lista
    for (int i = 0; i < lesson_increment; i++) {
        lesson.push_back(i);  // usando push_back para não precisar de sort
    }

    // inserindo elementos na posição 5
    list<int>::iterator it = lesson.begin();
    advance(it, 5);
    lesson.insert(it, 8);
    lesson.insert(it, 0);

    // ordena a lista de forma correta
    lesson.sort();

    // imprime o tamanho da lista
    cout << "list size: " << lesson.size() << endl;

    // exibe e limpa a lista
    lesson_increment = lesson.size();
    for (int i=0;i<lesson_increment;i++) {
        cout << lesson.front() << endl;
        lesson.pop_front();
    }

    return 0;
}
