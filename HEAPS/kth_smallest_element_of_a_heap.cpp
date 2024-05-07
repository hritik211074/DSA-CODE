#include<bits/stdc++.h>
using namespace std;
int kthsmallestElement(int arr[],int size,int k){
    // create a max heap
    priority_queue<int>pq;
    // insert initial k value of array in heap
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // for remaining element
    for(int i=k;i<size;i++){
        int element=arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
    }
int main()
{
    int arr[]={10,5,20,4,15};
    int size=5;
    int k=2;
    int ans=kthsmallestElement(arr,size,k);
    cout<<"kth smallest element is ->"<<ans<<endl;
    return 0;
}