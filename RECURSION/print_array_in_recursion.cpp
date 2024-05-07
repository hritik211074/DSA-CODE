#include<bits/stdc++.h>
using namespace std;
void printarray1(int arr[],int n){
    if(n==0){
        return ;
    }
    cout<<arr[0]<<" ";
    printarray1(arr+1,n-1);
}
void printarray2(int arr[],int n,int i){
    if(i==n){
        return ;
    }
    cout<<arr[i]<<" ";
    printarray2(arr,n,i+1);
}
int main()
{
    int arr[5]={3,5,6,2,3};
    printarray1(arr,5);
    cout<<endl;
    printarray2(arr,5,0);

    return 0;
}
