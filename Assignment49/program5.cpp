#include<iostream>
using namespace std;

int main(){

    int income = 0;
    double tax = 0;

    cout << "Enter annual income : ";
    cin >> income;

    if(income < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    if(income <= 250000){
        tax = 0;
    }
    else if(income <= 500000){
        tax = (income - 250000) * 0.05;
    }
    else if(income <= 1000000){
        tax = (250000 * 0.05);
        tax += (income - 500000) * 0.20;
    }
    else{
        tax = (250000 * 0.05);
        tax += (500000 * 0.20);
        tax += (income - 1000000) * 0.30;
    }

    cout << "Annual Income: ₹" << income << endl;
    cout << "Total Tax Payable: ₹" << tax << endl;

    return 0;
}