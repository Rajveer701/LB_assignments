#include<iostream>
using namespace std;

template <class T>

int Frequency(T *arr,int iSize,T iNo){
    int i=0;
    int Freq=0;

    for(i=0;i<iSize;i++){
        if(arr[i]==iNo){
            Freq++;
        }
    }
    return Freq;
}

int main(){
    int arr[] = {10,20,30,10,30,40,10,40,10};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};
    int iRet = 0;
    iRet = Frequency(arr,9,10);
    printf("%d\n",iRet);
    iRet = Frequency(brr,4,3.7f);
    printf("%d\n",iRet);
   
    return 0;
}