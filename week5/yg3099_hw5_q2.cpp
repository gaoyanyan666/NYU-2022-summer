#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int n = 5;
int main()
{

    int correctNumber, guessNumber = 44;
    int guessCount = 0;
    int guessLeft = 5;
    int rangeStart = 1, rangeEnd = 100;

    srand(time(0)); // create the seed for the random number generator.
    // int x1, x2, x3, x4;
    // x1 = rand();             // get a random positive number
    // x2 = rand();             // get a random positive number
    // x3 = rand() % 100;       // get random number 0-99
    // x4 = (rand() % 100) + 1; // get random number 1-100

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

    correctNumber = (rand() % 100) + 1; // generate a new random number

    for (int i = 0; i < n; i++)
    {

        cout << "Range: [" << rangeStart << ", " << rangeEnd << "]"
             << ", Number of guesses left: " << guessLeft << endl;

        cout << "Your guess: ";
        cin >> guessNumber;

        guessCount++;
        if (guessNumber == correctNumber)
        {
            cout << "Congrats! You guessed my number in " << guessCount << " guesses." << endl;
            break;
        }
        else if (guessLeft == 1)
        {
            cout << "Out of guesses! My number is " << correctNumber << endl;
            break;
        }
        else if (correctNumber > guessNumber)
        {
            cout << "Wrong! My number is bigger." << endl;
            if (rangeStart < guessNumber)
                rangeStart = guessNumber + 1;
        }
        else if (correctNumber < guessNumber)
        {
            cout << "Wrong! My number is smaller." << endl;
            if (rangeEnd > guessNumber)
                rangeEnd = guessNumber - 1;
        }

        guessLeft--;
    }

    return 0;
}