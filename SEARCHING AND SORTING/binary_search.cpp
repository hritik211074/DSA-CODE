#include<iostream>
using namespace std;
bool binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return true;
        }
        else if(key>arr[mid]){
             start=mid+1;
        }
        else{
           end=mid-1;
    }
  
}
 return false;
}
int main(){
    int arr[]={2,3,5,6,8,9,11,13};
    int size=8;
    int key;
    cin>>key;
    if(binarySearch(arr,size,key)){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    return 0;
}