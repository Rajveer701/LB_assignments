#include<iostream>
using namespace std;

int main(){

    int distance = 0;
    string peakHour;
    double fare = 50;

    cout << "Enter distance in km : ";
    cin >> distance;

    cout << "Peak hour (Yes/No) : ";
    cin >> peakHour;

    if(distance < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    if(distance <= 10){
        fare += distance * 12;
    }
    else{
        fare += 10 * 12;
        fare += (distance - 10) * 15;
    }

    if(peakHour == "Yes" || peakHour == "yes"){
        fare += fare * 0.20;
    }

    cout << "Distance: " << distance << " km" << endl;
    cout << "Peak Hour: " << peakHour << endl;
    cout << "Total Fare: ₹" << fare << endl;

    return 0;
}