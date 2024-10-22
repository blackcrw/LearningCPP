#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * The main function is the entry point of the program.
 * It prompts the user to enter a secret word, initializes the game variables,
 * and starts the game loop. The game loop allows the user to guess letters
 * and updates the secret word accordingly. The game continues until the user
 * either guesses the entire word or runs out of lives. Finally, it displays
 * a message indicating whether the user won or lost the game.
 *
 * @return 0 indicating successful execution of the program.
 */
int main() {
    char word[30], letter[1], secret[30]; // The secret word, the guessed letter, and the current state of the secret word.
    int size = 0, i = 0, life = 6, founds = 0; // The size of the secret word, the loop counter, the number of remaining lives, and the number of found letters.
    bool found = false; // A flag indicating whether the guessed letter was found in the secret word.

    cout << "Enter the secret word:" << endl;
    cin >> word;

    system("clear");

    while(word[size] != '\0') size++; // Calculate the size of the secret word.
    
    for(i = 0; i < size; i++) secret[i] = '_'; // Initialize the secret word with underscores.

    while ((life > 0) && (founds < size)) {
        cout << "Life: " << life << endl;
        cout << "Secret word: ";
        for(i = 0; i < size; i++) cout << secret[i] << " "; // Display the current state of the secret word.
        cout << endl;

        cout << "Enter a letter:" << endl;
        cin >> letter[0];

        found = false;
        for(i = 0; i < size; i++) { // Check if the guessed letter is in the secret word.
            if(word[i] == letter[0]) { // If the letter is found, update the secret word and increment the number of found letters.
                secret[i] = letter[0];
                found = true;
                founds++;
            }
        }

        if(!found) life--;

        system("clear");
    }

    if(founds == size) cout << "You win!" << endl;
    else cout << "You lose!" << endl;

    return 0;
}