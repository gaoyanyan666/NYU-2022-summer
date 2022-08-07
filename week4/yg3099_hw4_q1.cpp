#include <iostream>
using namespace std;

int main()
{
    cout << "section a" << endl; // section a start here

    int count = 1, evenNumber = 0;
    int inputNumber;

    cout << "Please enter a positive integer: ";
    cin >> inputNumber;

    while (count <= inputNumber)
    {
        evenNumber += 2;
        cout << evenNumber << endl;
        count++;
    }

    // section b start here
    cout << "section b" << endl;

    cout << "Please enter a positive integer: ";
    cin >> inputNumber;
    evenNumber = 0;
    for (count = 1; count <= inputNumber; count++)
    {
        evenNumber += 2;
        cout << evenNumber << endl;
    }

    return 0;
}