#include<iostream>
using namespace std;
int peakElement(int arr[],int size){
    int s=0,e=size-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]<arr[mid+1]){
             s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int main(){
    int arr[]={8,9,7,6,5,4,3,2};
    int size=8;
    int ans=peakElement(arr,size);
    cout<<arr[ans]<<endl;
    return 0;

}