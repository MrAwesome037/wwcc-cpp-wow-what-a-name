#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Number Guessing Game" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl << endl;
    do {
        attempts += 1;
        cout << "Enter a positive number: ";
        cin >> guess;
    } while (guess != secretNumber);

    cout << "You Won! Attempts: "<< attempts << endl;
    return 0;
}
