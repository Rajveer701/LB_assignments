#include<iostream>
using namespace std;

template <class T>

T Min(T *arr,int iSize){
    T mini = arr[0];
    int i=0;
    for(i=1;i<iSize;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}

int main(){
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = Min(arr,5);
    float fSum = Min(brr,4);

    printf("%d\n",iSum);
    printf("%f\n",fSum);
   
    return 0;
}