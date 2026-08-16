#include<iostream>
using namespace std;

int main(){

    int units;
    int weeksLate;

    double bill = 100;  
    double penaltyRate;
    double penalty;
    double finalBill;

    cout << "Enter water units : ";
    cin >> units;

    cout << "Enter weeks late : ";
    cin >> weeksLate;

    if(units < 0 || weeksLate < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    if(units <= 100){

        bill += units * 2;
    }
    else if(units <= 200){

        bill += 100 * 2;
        bill += (units - 100) * 3;
    }
    else if(units <= 500){

        bill += 100 * 2;
        bill += 100 * 3;
        bill += (units - 200) * 5;
    }
    else{

        bill += 100 * 2;
        bill += 100 * 3;
        bill += 300 * 5;
        bill += (units - 500) * 8;
    }

    penaltyRate = weeksLate * 0.02;

    if(penaltyRate > 0.10){
        penaltyRate = 0.10;
    }

    penalty = bill * penaltyRate;

    finalBill = bill + penalty;

    cout << "Water Bill: ₹" << bill << endl;
    cout << "Late Penalty: ₹" << penalty << endl;
    cout << "Final Bill: ₹" << finalBill << endl;

    return 0;
}