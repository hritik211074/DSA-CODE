#include<iostream>
using namespace  std;
int maxNum(int arr[],int size){
    int a=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>a){
            a=arr[i];
        }

    }
    return a;
}
int main(){
    int arr[]={5,7,2,34,9,76,1,90,35,78};
    int size=10;
    cout<<maxNum(arr,size);
    return 0;
}