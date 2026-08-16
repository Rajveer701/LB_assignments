#include<iostream>
using namespace std;

int main(){

    int marks = 0;
    int attendance = 0;
    int income = 0;

    cout << "Enter marks percentage : ";
    cin >> marks;

    cout << "Enter attendance percentage : ";
    cin >> attendance;

    cout << "Enter family income : ";
    cin >> income;

    if(marks < 0 || marks > 100 ||
       attendance < 0 || attendance > 100 ||
       income < 0){

        cout << "Invalid Input" << endl;
        return 0;
    }

    if(marks < 80){
        cout << "Scholarship Rejected: Marks must be at least 80%" << endl;
    }
    else if(attendance < 75){
        cout << "Scholarship Rejected: Attendance must be at least 75%" << endl;
    }
    else if(income > 300000){
        cout << "Scholarship Rejected: Family income must not exceed ₹300000" << endl;
    }
    else{
        cout << "Scholarship Approved" << endl;
    }

    return 0;
}