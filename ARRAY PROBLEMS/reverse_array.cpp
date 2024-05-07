#include<iostream>
#include<bits\stdc++.h>
using namespace std;
void reverse(int arr[],int size){
int start=0;
int end=size-1;
while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int arr[]={4,6,2,1,3,9,8,7,5};
    int size=9;
    reverse(arr,size);
    return 0;
}