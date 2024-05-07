#include<iostream>
#include<vector>
using namespace std;
int nearlySorted(vector<int>arr,int key){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(mid-1>=0&&arr[mid-1]==key){
            return mid-1;
        }
        if(mid+1<arr.size()&&arr[mid+1]==key){
            return mid+1;
        }
        if(arr[mid]>key){
            end=mid-2;
        }else{
            start=mid+2;
        }
    }
    return -1;
}
int main(){
    vector<int>a{10,3,40,20,50,80,70};
    int key;
    cout<<"Enter a key"<<endl;
    cin>>key;
    int ans=nearlySorted(a,key);
    cout<<ans<<endl;

    return 0;
}