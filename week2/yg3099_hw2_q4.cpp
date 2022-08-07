#include <iostream>
using namespace std;

int main(){
    int num1, num2, addValue, subtractValue, multiplyValue, divValue, modValue;
    double divideValue;
        
    cout << "Please enter two positive integers, separated by a space:" << endl;
    cin >> num1 >> num2;

    if (num1 >0 && num2 >0){    
        addValue = num1 + num2;
        subtractValue = num1 - num2;
        multiplyValue = num1 * num2;
        divideValue = (double)num1 / (double)num2;
        divValue = num1 / num2;
        modValue = num1 % num2;

        cout<< num1 << " + " << num2 << " = " << addValue <<endl;
        cout<< num1 << " - " << num2 << " = " << subtractValue <<endl;
        cout<< num1 << " * " << num2 << " = " << multiplyValue <<endl;
        cout<< num1 << " / " << num2 << " = " << divideValue <<endl;
        cout<< num1 << " div " << num2 << " = " << divValue <<endl;
        cout<< num1 << " mod " << num2 << " = " << modValue <<endl;

    }else{
        cout<< "The numbers you entered are not two positive integers." << endl;

    }
    
    return 0;
}