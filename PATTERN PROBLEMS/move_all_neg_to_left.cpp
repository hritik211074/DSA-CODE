#include<bits/stdc++.h>
using namespace std;
void moveAlNegToLeft(int *arr,int size){
    int l=0;
    int h=size-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
}
int main(){
    int arr[]={1,2,-3,4,-5,7-6};
    int size=7;
    moveAlNegToLeft(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}