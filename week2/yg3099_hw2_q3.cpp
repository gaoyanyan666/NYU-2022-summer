#include <iostream>
using namespace std;

const int MINUTES_IN_DAY = 1440;
const int MINUTES_IN_HOUR = 60;

int main(){
    int daysJohn, hoursJohn, minutesJohn, daysBill, hoursBill, minutesBill, totalDays, totalHours, totalMinutes, remainingMinutes;

    cout << "Please enter the number of days John has worked: ";
    cin >> daysJohn;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hoursJohn;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutesJohn;

    cout << endl;

    cout << "Please enter the number of days Bill has worked: ";
    cin >> daysBill;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hoursBill;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minutesBill;

    cout << endl;

    
    totalMinutes = (daysJohn + daysBill) * MINUTES_IN_DAY + (hoursJohn + hoursBill) * MINUTES_IN_HOUR + minutesBill + minutesJohn ;
    totalDays =  totalMinutes / MINUTES_IN_DAY;
    totalHours = totalMinutes % MINUTES_IN_DAY/ MINUTES_IN_HOUR;
    remainingMinutes = totalMinutes % MINUTES_IN_DAY % MINUTES_IN_HOUR ;


    cout << "The total time both of them worked together is: "<< totalDays <<" days, "<< totalHours <<" hours, "<< remainingMinutes <<" minutes."<< endl;
    

    return 0;
}