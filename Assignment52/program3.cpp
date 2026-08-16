#include<iostream>
using namespace std;

int main(){

    int steps = 0;
    int goalDays = 0;
    int maximumSteps = 0;

    const int GOAL = 10000;

    for(int i = 1; i <= 7; i++){

        cout << "Enter steps for day " << i << " : ";
        cin >> steps;

        if(steps < 0){
            cout << "Invalid Input" << endl;
            return 0;
        }

        if(steps >= GOAL){
            goalDays++;
        }

        if(steps > maximumSteps){
            maximumSteps = steps;
        }
    }

    cout << "Goal Achieved Days: " << goalDays << endl;
    cout << "Maximum Steps in Week: " << maximumSteps << endl;

    return 0;
}