#include<iostream>
using namespace std;
void function(int arr[],int size){
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
}
int main(){
    int arr[]={3,4,5};
    int size=3;
    function(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}