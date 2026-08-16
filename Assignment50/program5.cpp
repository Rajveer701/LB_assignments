#include<iostream>
using namespace std;

int main(){

    int battery = 0;

    cout << "Enter battery percentage : ";
    cin >> battery;

    if(battery < 0 || battery > 100){
        cout << "Invalid Input" << endl;
        return 0;
    }

    cout << "Battery Percentage: " << battery << "%" << endl;

    if(battery <= 5){
        cout << "Status: Critical" << endl;
    }
    else if(battery <= 15){
        cout << "Status: Low" << endl;
    }
    else{
        cout << "Status: Normal" << endl;
    }

    return 0;
}