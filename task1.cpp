#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess the number between 1 to 100\n";

    do
    {
        cout << "Enter guess: ";
        cin >> guess;

        if(guess > number)
            cout << "Too high\n";
        else if(guess < number)
            cout << "Too low\n";
        else
            cout << "Correct guess!\n";

    } while(guess != number);

    return 0;
}