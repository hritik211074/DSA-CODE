#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int key,int i,int j){
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==key){
            return mid;

        }
        else if(arr[mid]>key){
            return binarysearch(arr,key,i,mid-1);
        }
        else{
           return binarysearch(arr,key,mid+1,j);
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    int i=0;
    int j=n-1;
    int index=binarysearch(arr,key,i,j);
    if(index==-1){
     cout<<" not found at index : "<<endl;
    }else
    {
        cout<<"found at index "<<index<<endl;
    }
   
    return 0;
}