#include<iostream>
using namespace std;

int main(){

    int days = 0;
    double bill = 0;
    double discount = 0;
    double finalBill = 0;

    cout << "Enter number of days stayed : ";
    cin >> days;

    if(days < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    bill = days * 3000;

    if(days > 7){
        discount = bill * 0.05;
    }

    finalBill = bill - discount;

    cout << "Total Stay Duration: " << days << " days" << endl;
    cout << "Final Bill Amount: ₹" << finalBill << endl;

    return 0;
}