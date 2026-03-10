#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int secret, user;
    int tries = 0;

    srand(time(0));
    secret = rand() % 50 + 1;

    cout << "Guess a number between 1 and 50" << endl;

    while(true)
    {
        cout << "Enter guess: ";
        cin >> user;
        tries++;

        if(user == secret)
        {
            cout << "Correct! You guessed in " << tries << " tries." << endl;
            break;
        }
        else if(user > secret)
        {
            cout << "Number is smaller." << endl;
        }
        else
        {
            cout << "Number is bigger." << endl;
        }
    }

    return 0;
}