#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,7,3,5,2,9};
    int size=7;
    int start=0;
    int end=size-1;
    while(start<=end){
        if(start==end){
            cout<<arr[start];
        }
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        
        }
        start=start+1;
        end=end-1;
    }
    return 0;
}