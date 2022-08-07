#include <iostream>
#include <string>

using namespace std;
// const int GRADUATED = 0;
// const int FRESHMAN = 1;
// const int SOPHOMORE = 2;
// const int JUNIOR = 3;
// const int SENIOR = 4;

enum
{
    GRADUATED = 0,
    SENIOR,
    JUNIOR,
    SOPHOMORE,
    FRESHMAN
}

int
main()
{
    string username, status;
    int graduate_year, curr_year, diff;

    cout << "Please enter your name: ";
    std::getline(cin, username);
    cout << "Please enter your graduation year: ";
    cin >> graduate_year;
    cout << "Please enter current year: ";
    cin >> curr_year;

    diff = graduate_year - curr_year;

    if (diff <= GRADUATED)
    {
        status = "Graduated";
        cout << username + ", you are a " + status << endl;
    }
    else if (diff == SENIOR)
    {
        status = "Senior";
        cout << username + ", you are a " + status << endl;
    }
    else if (diff == JUNIOR)
    {
        status = "Junior";
        cout << username + ", you are a " + status << endl;
    }
    else if (diff == SOPHOMORE)
    {
        status = "Sophomore";
        cout << username + ", you are a " + status << endl;
    }
    else if (diff == FRESHMAN)
    {
        status = "Freshman";
        cout << username + ", you are a " + status << endl;
    }
    else
    {
        cout << "not in college yet." << endl;
    }

    return 0;
}