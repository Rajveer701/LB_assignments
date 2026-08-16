#include<iostream>
using namespace std;

int main(){
    int Age = 0;
    int Income = 0;
    int CreditScore = 0;
    string status = "";
    
    cout<<"Enter age : "<<endl;
    cin>>Age;

    cout<<"Enter Montly Income : "<<endl;
    cin>>Income;

    cout<<"Enter Credit Score : "<<endl;
    cin>>CreditScore;

    cout << "Existing unpaid loan (Yes/No) : ";
    cin >> status;

    if(Age < 0 || Income < 0 || CreditScore < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    if(status != "Yes" && status != "No" && status != "yes" && status != "no"){
        cout << "Invalid Yes/No input" << endl;
        return 0;
    }

    if(Age < 21 || Age > 60){
        cout << "Loan Rejected: Age must be between 21 and 60" << endl;
    }
    else if(Income < 25000){
        cout << "Loan Rejected: Monthly income must be at least ₹25000" << endl;
    }
    else if(CreditScore < 700){
        cout << "Loan Rejected: Credit score must be at least 700" << endl;
    }
    else if(status == "Yes" || status == "yes"){
        cout << "Loan Rejected: Existing unpaid loan" << endl;
    }
    else{
        cout << "Loan Approved" << endl;
    }


    return 0;
}

    
