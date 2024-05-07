#include<bits/stdc++.h>
using namespace std;
bool isArraySorted(int arr[],int n,int i){
    if(i==n){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }
     isArraySorted(arr,n,i+1);
   
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        if(isArraySorted(arr,n,0)){
            cout<<"given array is sorted"<<endl;
        }
        else{
            cout<<"given array is not sorted"<<endl;
        }
    
return 0;
}