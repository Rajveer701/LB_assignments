#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int days = 0;
    int medicineBill = 0;
    int consultationFee = 0;
    string wardType;
    string insured;

    double roomCharge = 0;
    double totalBill = 0;
    double insuranceCover = 0;
    double finalPay = 0;

    cout << "Enter number of days : ";
    cin >> days;

    cout << "Enter ward type (Normal/ICU) : ";
    cin >> wardType;

    cout << "Enter medicine bill : ";
    cin >> medicineBill;

    cout << "Enter consultation fee : ";
    cin >> consultationFee;

    cout << "Insured (Yes/No) : ";
    cin >> insured;

    if(days < 0 || medicineBill < 0 || consultationFee < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    if(wardType != "Normal" && wardType != "normal" &&
       wardType != "ICU" && wardType != "icu"){
        cout << "Invalid Ward Type" << endl;
        return 0;
    }

    if(wardType == "Normal" || wardType == "normal"){
        roomCharge = days * 2000;
    }
    else{
        roomCharge = days * 5000;
    }

    totalBill = medicineBill + consultationFee + roomCharge;

    if(insured == "Yes" || insured == "yes"){

        insuranceCover = totalBill * 0.70;

        if(insuranceCover > 50000){
            insuranceCover = 50000;
        }

        finalPay = totalBill - insuranceCover;
    }
    else{
        finalPay = totalBill;
    }

    cout << "Total Bill: ₹" << totalBill << endl;
    cout << "Insurance Cover: ₹" << insuranceCover << endl;
    cout << "Final Pay: ₹" << finalPay << endl;

    return 0;
}