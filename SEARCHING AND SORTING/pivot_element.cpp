#include<iostream>
#include<vector>
using namespace std;
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
    vector<int>a{5,6,7,8,9,1,2,3};
    int pivot=findPivot(a);
    cout<<"pivot element is "<<a[pivot]<<endl;
    return 0;
}