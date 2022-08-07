#include <iostream>
#include <string>

using namespace std;

const double WEIGHT_RATE = 0.453592;
const double HEIGHT_RATE = 0.0254;
const double UNDERWEIGHT = 18.5;
const double OVERWEIGHT = 25.0;
const double OBESE = 30.0;

int main(){
    double weight, height, kg_weight, meter_height, BMI;
    string status;
    cout << "Please enter weight (in pounds):";
    cin >> weight;
    cout << "Please enter height (in inches):";
    cin >> height;
    kg_weight = weight * WEIGHT_RATE;
    meter_height = height * HEIGHT_RATE;
    BMI = kg_weight / (meter_height * meter_height);
    if(BMI < UNDERWEIGHT){
        status = "Underweight";
    }else if(BMI >= UNDERWEIGHT && BMI < OVERWEIGHT){
        status = "Normal";
    }else if(BMI >= OVERWEIGHT && BMI < OBESE){
        status = "Overweight";
    }else{
        status = "Obese";
    }

    cout << "The weight status is: " << status <<endl;


    return 0;
}