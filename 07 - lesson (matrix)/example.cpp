#include <iostream>

/**
 * The main function is the entry point of the program.
 * It uses nested for loops to print a matrix of coordinates.
 * Each coordinate is printed in the format (i, j), where i and j are the loop variables.
 * The outer loop iterates from 0 to 10, and the inner loop iterates from 0 to 10.
 * After printing each row of coordinates, a new line is inserted.
 * The function returns 0 to indicate successful execution.
 */
int main() {
    for(int i = 0; i <= 10; i++) {
        for(int j = 0; j <= 10; j++) {
            std::cout << "(" << i << "," << j << ") ";
        }
        std::cout << std::endl;
    }

    return 0;
}