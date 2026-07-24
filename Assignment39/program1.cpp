#include<iostream>
using namespace std;

void Display(int iNo){
    static int i=1;

    if(i<=iNo){
        cout<<"*\t";
        i++;
        Display(iNo);
    }
}

int main(){
    Display(5);

    return 0;
}