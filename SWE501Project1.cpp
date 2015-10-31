#include <iostream> // This library is used for input/output functions.
#include <cstdlib> // This library is required in order to use rand() function.
#include <ctime> // This function is required in order to use time function.

using namespace std;

int main (void){

int number, guess, round = 0;
srand(time(0)); // Random seed with time function. Creates a different random number when we restart the game.

number = rand() % 100 + 1; // Random number (1 - 100)
cout << "Number Guessing Game\n";
cout << "===============================\n";
cout << "SWE 501 - Fall'15 - Project 1\n";
cout << "===============================\n\n";

do
{
    cout << "What is your number guess between 1 and 100?\n";
    cin >> guess;
    round++; // Counting played rounds.

    if (guess > number){
        cout << "Too high! Try again...\n";
    }
    else if (guess < number) {
        cout << "Too low! Try again...\n";
    }
    else
    {
        cout << "Congratulations! You find the number in " << round << " guesses!\n";
    }
}
while (guess!=number);
    {
        cin.ignore();
        cin.get();
        return 0;
    }

}


