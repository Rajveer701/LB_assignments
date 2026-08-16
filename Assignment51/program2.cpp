#include<iostream>
using namespace std;

int main(){

    int distance;
    int bookingHoursBefore;
    int age;

    string classType;

    double fare = 0;
    double classCharge = 0;
    double tatkalCharge = 0;
    double seniorDiscount = 0;

    cout << "Enter distance : ";
    cin >> distance;

    cout << "Enter class (Sleeper/3AC/2AC) : ";
    cin >> classType;

    cout << "Enter booking hours before journey : ";
    cin >> bookingHoursBefore;

    cout << "Enter age : ";
    cin >> age;

    if(distance < 0 || bookingHoursBefore < 0 || age < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    if(distance <= 100){
        fare = 100;
    }
    else if(distance <= 500){
        fare = 100 + (distance - 100) * 2;
    }
    else if(distance <= 1000){
        fare = 900 + (distance - 500) * 3;
    }
    else{
        fare = 2400 + (distance - 1000) * 4;
    }

    if(classType == "Sleeper" || classType == "sleeper"){
        classCharge = 100;
    }
    else if(classType == "3AC" || classType == "3ac"){
        classCharge = 300;
    }
    else if(classType == "2AC" || classType == "2ac"){
        classCharge = 500;
    }
    else{
        cout << "Invalid Class Type" << endl;
        return 0;
    }

    fare += classCharge;

    cout << "\nBase Fare + Class Charge: ₹" << fare << endl;

    if(bookingHoursBefore <= 24){
        tatkalCharge = fare * 0.30;
        fare += tatkalCharge;
    }

    if(age >= 60){
        seniorDiscount = fare * 0.40;
        fare -= seniorDiscount;
    }

    cout << "Tatkal Charge: ₹" << tatkalCharge << endl;
    cout << "Senior Discount: ₹" << seniorDiscount << endl;
    cout << "Final Fare: ₹" << fare << endl;

    return 0;
}