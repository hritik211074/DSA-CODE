#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int pivotIndex=s;
    int pivotElement=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    swap(arr[pivotIndex],arr[s+count]);
    pivotIndex=s+count;
    int i=s;
    int j=e;
    while(i<j){
       if(arr[i]<=pivotElement){
        i++;
        }
       else if(arr[j]> pivotElement){
        j--;
       }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
   return pivotIndex;
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
 int pivot=partition(arr,s,e);
 quicksort(arr,s,pivot-1);
 quicksort(arr,pivot+1,e);
 }
int main()
{
   int arr[]={8,1,12,40,50,60};
   int n=6 ;
   int s=0;
   int e=n-1;
   quicksort(arr,s,e);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
   return 0;
}