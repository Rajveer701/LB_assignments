#include<iostream>
using namespace std;

template <class T>

int SearchFirst(T *arr,int iSize,T iNo){
    int i=0;
    int FirstOcc=0;

    for(i=0;i<iSize;i++){
        if(arr[i]==iNo){
            FirstOcc = i;
            break;
        }
    }
    return FirstOcc;
}

int main(){
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    printf("%d\n",iRet);

    return 0;
}