#include<iostream>
using namespace std;

int main(){
    int hrs = 0;
    int amount = 0;
    int penalty = 50;
    cout<<"Enter total parking hours"<<endl;
    cin>>hrs;

    if(hrs<0){
        cout<<"Invalid Input"<<endl;
    }
    if(hrs<=2){
        amount = hrs*20;
    }
    else if(hrs>2 && hrs<=10){
        amount += 2*20;
        amount += (hrs-2)*10;
    }
    else if(hrs>10){
        amount += 2*20;
        amount += (hrs-2)*10;
        amount += 50;
    }

    cout<<"Total Parking Duration : "<<hrs<<endl;
    cout<<"Total Parking Fee : "<<amount<<endl;

    return 0;
}

    
