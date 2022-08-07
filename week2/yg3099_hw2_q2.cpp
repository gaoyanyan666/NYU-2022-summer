#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;

int main(){
    int dollars, cents, totalCents, quarters, dimes, nickels, pennies;
    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin >> dollars >> cents;
    cout << dollars <<" dollars and "<< cents <<" cents are:"<< endl;

    totalCents = dollars * 100 + cents;
    quarters = totalCents / QUARTER;
    dimes = totalCents % QUARTER / DIME;
    nickels = totalCents % QUARTER % DIME / NICKEL;
    pennies = totalCents % QUARTER % DIME % NICKEL;


    cout << quarters <<" quarters, "<< dimes <<" dimes, "<< nickels << " nickels and " << pennies << " pennies" << endl;

    return 0;
}