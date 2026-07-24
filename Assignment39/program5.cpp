#include<iostream>
using namespace std;

void Display(){
    static char ch='a';

    if(ch<='f'){
        cout<<ch<<"\t";
        ch++;
        Display();
    }
}

int main(){
    Display();

    return 0;
}