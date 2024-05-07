#include<iostream>
#include<vector>
using namespace std;
bool binarySearch1(vector<int>a,int key,int pivot){
    int start=0;
    int end=pivot;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==key){
            return true;
        }
        else if(key>a[mid]){
             start=mid+1;
        }
        else{
           end=mid-1;
    }
  
    }
    return false;
    }
    bool binarySearch2(vector<int>a,int key,int pivot){
        int start=pivot+1;
    int end=a.size()-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==key){
            return true;
        }
        else if(key>a[mid]){
             start=mid+1;
        }
        else{
           end=mid-1;
    }
  
    }
    return false;
    }
int findPivot(vector<int>a){
    int start=0;
    int end=a.size()-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(mid+1<a.size()&& a[mid]>a[mid+1]){
            return mid;
        }
        if(mid-1>=0&&a[mid-1]>a[mid]){
            return mid-1;
        }
        if(a[start]>=a[mid]){
           end=mid-1;
        }
        else{
          start=mid+1;  
    }
    }  
    return -1;
}
int main(){
    vector<int>a{8,3,4,5,6,7};
    int key=7;
    int pivot=findPivot(a);
    if(key>=a[0]&&key<=a[pivot]){
        
        if(binarySearch1(a,key,pivot)){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
    if(key>=a[pivot+1]&&key<a[a.size()]){
        if(binarySearch2(a,key,pivot)){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
    
    return 0;
}
