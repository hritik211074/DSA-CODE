#include<bits/stdc++.h>
using namespace std;
int minimumcoin(int arr[],int n,int target){
    
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int ans= minimumcoin(arr,n,target-arr[i]);
         if(ans !=INT_MAX){
         ans=min(ans+1,mini);
        }
    }
    return mini;
   
}
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int result= minimumcoin(arr,n,target);
     cout<<"minimum coin required is :"<<result;
     return 0;
}