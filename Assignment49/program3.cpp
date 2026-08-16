#include<iostream>
using namespace std;

int main(){
    int currStock = 0;
    int reqQuantity = 0;
    int remainingStock = 0;
    
    cout<<"Enter Current Stock : "<<endl;
    cin>>currStock;

    cout<<"Enter required Quantity : "<<endl;
    cin>>reqQuantity;

    if(reqQuantity > currStock){
        cout<<"Order fails : Insufficient Stock"<<endl;
    }
    else{
        remainingStock = currStock-reqQuantity;
        cout<<"Order processed successfully"<<endl;
        cout<<"Remaining Stock : "<<remainingStock<<endl;

        if(remainingStock < 5){
            cout<<"Low Stock Alert!!!"<<endl;
        }
    }


    return 0;
}

    
