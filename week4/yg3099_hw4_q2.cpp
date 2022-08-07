#include <iostream>
#include <string>
using namespace std;

const int M = 1000, D = 500, C = 100, L = 50, X = 10, V = 5, I = 1;

int main()
{
    int decimal_number, remaining_number, ThousandsDigit, HundredDigit, TenDigit, Digit;
    string thou_Roman, hun_Roman, ten_Roman, Roman, whole_Roman;
    cout << "Enter decimal number:" << endl;
    cin >> decimal_number;

    cout << decimal_number << " is ";

    while (decimal_number >= M)
    {
        cout << "M";
        decimal_number -= M;
    }
    while (decimal_number >= D)
    {
        cout << "D";
        decimal_number -= D;
    }
    while (decimal_number >= C)
    {
        cout << "C";
        decimal_number -= C;
    }
    while (decimal_number >= L)
    {
        cout << "L";
        decimal_number -= L;
    }
    while (decimal_number >= X)
    {
        cout << "X";
        decimal_number -= X;
    }
    while (decimal_number >= V)
    {
        cout << "V";
        decimal_number -= V;
    }
    while (decimal_number >= I)
    {
        cout << "I";
        decimal_number -= I;
    }

    return 0;
}