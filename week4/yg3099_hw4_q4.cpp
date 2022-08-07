#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int length, sequenceNumberA, sequenceNumberB, multiplyResultA, multiplyResultB;
    double geometric_meanA, geometric_meanB;
    bool finished = false;
    multiplyResultA = 1;
    multiplyResultB = 1;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);

    cout << "section a" << endl;

    cout << "Please enter the length of the sequence: ";
    cin >> length;
    cout << "Please enter your sequence: " << endl;

    for (int i = 1; i <= length; i++)
    {
        cin >> sequenceNumberA;

        multiplyResultA = multiplyResultA * (sequenceNumberA);
    }
    geometric_meanA = pow(multiplyResultA, 1 / double(length));

    cout << "The geometric mean is: " << geometric_meanA << endl;

    cout << "section b" << endl;

    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your\nsequence by typing -1 : " << endl;
    cin >> sequenceNumberB; // get the first input value

    int counter = 0;

    while (sequenceNumberB != -1)
    {

        multiplyResultB *= sequenceNumberB;
        counter++;
        cin >> sequenceNumberB; // get the rest of the input values
    }

    geometric_meanB = pow(multiplyResultB, 1 / double(counter));

    cout << "The geometric mean is: " << geometric_meanB << endl;

    return 0;
}