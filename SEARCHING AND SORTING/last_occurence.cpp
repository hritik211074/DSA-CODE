#include<iostream>
#include<vector>
using namespace std;
int lastOcc(vector<int>arr,int key){
    int s=0;
    int e=arr.size()-1;
    int a=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            a=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return a;
}
int main(){
    vector<int>arr{1,2,3,4,4,4,4,5,6};
    int key=6;
    int lastInd=lastOcc(arr,key);
    cout<<lastInd<<endl;
    return 0;
}