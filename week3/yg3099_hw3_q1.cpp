#include <iostream>
#include <iomanip>
using namespace std;

const double MEMBER_DISCOUNT = 0.1;
const double HALF = 0.5;

int main(){
    double total_price,item1_price, item2_price, promotion_price, discount_price, base_price, tax_rate;
    char flagging;

    cout << "Enter price of first item: ";
    cin >> item1_price;
    cout << "Enter price of second item: ";
    cin >> item2_price;
    cout<<"Does customer have a club card? (Y/N): ";
    cin>> flagging;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: " ;
    cin >> tax_rate;

    base_price = item1_price + item2_price ;


    cout<< "Base price: "<< fixed << showpoint << setprecision(1) << base_price <<endl;

    if (item1_price > item2_price){
        promotion_price = item1_price +  item2_price * HALF;

    }else{
        promotion_price = item1_price * HALF + item2_price;
    }

    if (flagging == 'y' || flagging == 'Y'){
        discount_price = promotion_price - promotion_price * MEMBER_DISCOUNT;
    }else if(flagging == 'n' || flagging == 'N'){
        discount_price = promotion_price;
    }else{
        discount_price = promotion_price;
        cout << "Since you did not enter  \'Y \' or \'y \' for \"yes\"; \'N \' or \'n \'for \"no\", there will not be promotion off in your price."<<endl;
        
        }


    total_price = discount_price + (discount_price * tax_rate)/100 ;

    cout << "Price after discounts: "<< fixed << showpoint << setprecision(1) << discount_price <<endl;
    cout << "Total price: "<< fixed << showpoint << setprecision(5) << total_price <<endl;

    return 0;
}