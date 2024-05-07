#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *left=new int[len1];
    int *right=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
     right[i]=arr[k];
     k++;
    }
    int leftind=0;
    int rightind=0;
    int ind=s;
    while(leftind<len1 && rightind<len2){
        if(left[leftind]<right[rightind]){
            arr[ind++]=left[leftind++];
        }else{
            arr[ind++]=right[rightind++];
        }
    }
    while(leftind<len1){
        arr[ind++]=left[leftind++];
    }
     while(rightind<len2){
        arr[ind++]=right[rightind++];
    }
    delete[]left;
    delete[]right;
    
}
void  mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
   int arr[]={2,5,1,3,9,8,6};
   int n=7;
   int s=0;
   int e=n-1;
   mergesort(arr,s,e);
   for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
   }
   return 0;
}