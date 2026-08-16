#include<iostream>
using namespace std;

int main(){

    int mins, gb, sms;

    cout << "Enter call minutes : ";
    cin >> mins;

    cout << "Enter data usage in GB : ";
    cin >> gb;

    cout << "Enter SMS count : ";
    cin >> sms;

    if(mins < 0 || gb < 0 || sms < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    string planName[4] = {"Basic","Standard","Premium","Ultra"};

    int basePrice[4] = {199,299,399,499};

    int callLimit[4] = {200,500,1000,1500};

    int dataLimit[4] = {2,5,10,20};

    int smsLimit[4] = {100,300,500,1000};

    double minCost = 999999;
    string recommendedPlan = "";

    for(int i = 0; i < 4; i++){

        double cost = basePrice[i];

        if(mins > callLimit[i]){
            cost += (mins - callLimit[i]) * 1;
        }

        if(gb > dataLimit[i]){
            cost += (gb - dataLimit[i]) * 20;
        }

        if(sms > smsLimit[i]){
            cost += (sms - smsLimit[i]) * 0.50;
        }

        cout << planName[i] << " Cost: ₹" << cost << endl;

        if(cost < minCost){
            minCost = cost;
            recommendedPlan = planName[i];
        }
    }

    cout << "Recommended Plan: " << recommendedPlan << endl;
    cout << "Total Cost: ₹ " << minCost << endl;

    return 0;
}