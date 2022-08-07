#include <iostream>

using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main()
{
    double R_num;
    int result, choice;
    cout << "Please enter a Real number:" << endl;
    cin >> R_num;

    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (R_num >= 0)
            result = int(R_num);
        else
            result = int(R_num) - 1;
        break;
    case 2:
        if (R_num >= 0)
            result = int(R_num) + 1;
        else
            result = int(R_num);
        break;
    case 3:
        if (R_num >= 0)
        {
            if ((R_num + 0.5) >= (int(R_num) + 1))
                result = int(R_num) + 1;
            else
                result = int(R_num);
        }
        else
        {
            if ((R_num - 0.5) < int(R_num))
                result = int(R_num) - 1;

            else
                result = int(R_num);
        }

        break;
    default:
        cout << "Invalid number." << endl;
        break;
    }
    cout << result << endl;

    return 0;
}