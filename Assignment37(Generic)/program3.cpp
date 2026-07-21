#include<iostream>
using namespace std;

template <class T>

T AddN(T *arr,int iSize){
    T sum=0;
    int i=0;

    for(i=0;i<iSize;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr,5);
    float fSum = AddN(brr,4);

    printf("%d\n",iSum);
    printf("%f\n",fSum);
   
    return 0;
}