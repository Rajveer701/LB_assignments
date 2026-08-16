#include<iostream>
using namespace std;

int main(){

    int minutes = 0;
    int charge = 0;

    cout << "Enter call duration in minutes : ";
    cin >> minutes;

    if(minutes < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    if(minutes <= 5){
        charge = 0;
    }
    else if(minutes <= 15){
        charge = (minutes - 5) * 1;
    }
    else{
        charge = 10;
        charge += (minutes - 15) * 2;
    }

    cout << "Call Duration: " << minutes << " minutes" << endl;
    cout << "Total Call Charge: ₹" << charge << endl;

    return 0;
}