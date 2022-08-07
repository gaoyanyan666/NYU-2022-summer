#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a positive number: ";
    cin >> n;
    for (int row = n; row >= 1; row--)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * row - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * row - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}