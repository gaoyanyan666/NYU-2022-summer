#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a positive number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) // loop out number 1 to n
    {
        int evenCount = 0;
        int oddCount = 0;
        int testDigit = i; // assign i's value to a new variable and use this new variable to test, can not directly use i to test, because it will change the i's value and creat an infinite loop

        while (testDigit > 0)
        {
            int rem = testDigit % 10;
            if (rem % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
            testDigit = testDigit / 10;
        }

        if (evenCount > oddCount)
        {
            cout << i << endl;
        }
    }

    return 0;
}