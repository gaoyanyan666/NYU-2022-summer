#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;
int main(){
    int quarters, dimes, nickels, pennies, totalCentsValue, totalDollarsValue, remainCentsValue;
    cout << "Please enter number of coins:\n";
    cout << "# of quarters:";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;

    totalCentsValue = quarters * QUARTER + dimes * DIME + nickels * NICKEL + pennies * PENNY ;
    totalDollarsValue = totalCentsValue / 100 ;
    remainCentsValue = totalCentsValue % 100 ;

    cout << "The total is " << totalDollarsValue <<" dollars and "<<remainCentsValue<<" cents"<<endl;

    return 0;
}