#include <iostream>
#include <string>
using namespace std;

const double WEEK_DAYTIME_RATE = 0.40;
const double WEEK_NIGHT_RATE = 0.25;
const double WEEKEND_RATE = 0.15;
const double WEEK_RATE = 0.40;

int main(){    
    string day;
    char seperator;
    int hour, minute, length;
    double cost;
    cout << "Please enter the day of the week(ex. Monday is 'Mo', Tuesday is 'Tu'): ";
    cin >> day;
    cout << "Please enter the time (24-hour notation) you started the call: ";
    cin >> hour >>seperator>> minute;
    cout <<"Please enter the length of the call in minutes(positive integer): ";
    cin >> length;

    
    if (day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr"){
        if (hour >= 8 && hour <= 17)
                cost = length * WEEK_DAYTIME_RATE;
            else
                cost = length * WEEK_NIGHT_RATE;
    }else if (day == "Sa" || day == "Su"){
        cost = length * WEEKEND_RATE;
    }
    cout << "The cost of the call is " << cost <<" $." << endl;


    return 0;
}
