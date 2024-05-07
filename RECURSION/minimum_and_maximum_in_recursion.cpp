#include<bits/stdc++.h>
using namespace std;
void maxiarray(int arr[],int n, int &maxi){
   
    if(n==0){
        return;
    }
     
   maxi=max(maxi,arr[0]);
     maxiarray(arr+1,n-1,maxi);
     
}
void  miniarray(int arr[],int n,int &mini){
    
    if(n==0){
        return;
    }
    mini=min(mini,arr[0]);
    miniarray(arr+1,n-1,mini);
   
}
int main()
{
    int arr[5]={3,5,6,2,3};
    int maxi=INT_MIN;
    int mini=INT_MAX;
    maxiarray(arr,5,maxi);
    cout<<"maximium value is"<<maxi<<endl;
   
    miniarray(arr,5,mini);
    cout<<"minimum value is :"<<mini<<endl;

    return 0;
}
