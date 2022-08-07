#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double a, b, c;
    double x1, x2;
    string result;
    double depend, sqrt_depend;

    
    cout << "Please enter a value of a: ";
    cin >> a;
    cout << "Please enter a value of b: ";
    cin >> b;
    cout << "Please enter a value of c: ";
    cin >> c;

    
    depend = (b * b) - (4 * a * c);
    sqrt_depend = sqrt(depend);



    //case when a = 0
    if (a == 0 && b == 0 && c == 0) {
        result = "infinite number of solutions";
        cout<<"This equation has "<<result<<endl;
    } else if (a == 0 && b == 0 && c != 0) {
        result = "no result";
        cout<<"This equation has "<<result<<endl;
    } else if (a == 0 && b != 0 && c != 0) {
        result = "a single real solution ";
        x1 = (-c) / b;
        cout<<"This equation has "<<result<<"x = "<<x1<<endl;
    } else if (a == 0 && b != 0 && c == 0) {
        result = "a single real solution ";
        x1 = 0;
        cout<<"This equation has "<<fixed<<showpoint<<setprecision(1)<<result<<"x = "<<x1<<endl;
    } else if (a != 0) { //case when a != 0
        if (depend == 0) {
            result = "a single real solution ";
            x1 = (-b) / 2 * a;
            cout<<"This equation has "<<fixed<<showpoint<<setprecision(1)<<result<<"x = "<<x1<<endl;
        } else if (depend > 0) {
            result = "two real solutions ";
            x1 = (-b + sqrt_depend) / 2 * a;
            x2 = (-b - sqrt_depend) / 2 * a;
            cout<<"This equation has "<<result<<" x1 ="<< showpoint <<x1<<", x2 ="<< showpoint <<x2<<endl;
            // use showpoint to show the whole solution in output, otherwise the result is incorrect. e.g. when a = 1, b = 60, c = 1, the result will show - 0.0 and -60.0 
        } else if (depend < 0) {
            result = "no real solution ";
            cout<<"This equation has "<<result<<endl;
        }
    }

    return 0;
}