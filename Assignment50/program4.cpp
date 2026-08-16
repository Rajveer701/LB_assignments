#include<iostream>
using namespace std;

int main(){

    int budget = 0;
    int n = 0;
    int price = 0;
    int count = 0;

    cout << "Enter budget : ";
    cin >> budget;

    cout << "Enter number of items : ";
    cin >> n;

    if(budget < 0 || n < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    for(int i = 0; i < n; i++){

        cout << "Enter price of item " << i + 1 << " : ";
        cin >> price;

        if(price <= 0){
            cout << "Invalid Price" << endl;
            return 0;
        }

        if(price <= budget){
            budget -= price;
            count++;
        }
        else{
            break;
        }
    }

    cout << "Items Purchased: " << count << endl;
    cout << "Remaining Balance: ₹" << budget << endl;

    return 0;
}