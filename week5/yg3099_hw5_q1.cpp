#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    cout << "Please enter a positive integer:" << endl;
    cin >> n;

    int startNumber = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << startNumber << '\t';
            startNumber += i;
        }
        startNumber = 1;
        startNumber += i;

        cout << endl;
    }

    return 0;
}
