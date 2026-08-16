#include<iostream>
using namespace std;

int main(){

    int weight = 0;
    int charge = 0;

    cout << "Enter parcel weight in kg : ";
    cin >> weight;

    if(weight <= 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    if(weight <= 1){
        charge = 50;
    }
    else if(weight <= 5){
        charge = 50;
        charge += (weight - 1) * 20;
    }
    else{
        charge = 150;
        charge += (weight - 5) * 30;
    }

    cout << "Parcel Weight: " << weight << " kg" << endl;
    cout << "Courier Charge: ₹" << charge << endl;

    return 0;
}