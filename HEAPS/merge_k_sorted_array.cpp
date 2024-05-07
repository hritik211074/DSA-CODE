#include<bits/stdc++.h>
using namespace std;
class info{
    public:
    int data;
    int row;
    int col;
    info(int data,int row,int col){
        this->data=data;
        this->row=row;
        this->col=col;
    }
};
class compare{
    public: 
    bool operator()(info*a,info*b){
        return a->data > b->data;
    }
};
vector<int>mergeKsortedArray(int arr[][4],int k,int n){
priority_queue<info*,vector<info*>,compare>minheap;
for(int i=0;i<k;i++){
    info *temp=new info(arr[i][0],i,0);
    minheap.push(temp);
}
vector<int>ans;
while(!minheap.empty()){
    info*temp=minheap.top();
    int topElement=temp->data;
    int toprow=temp->row;
    int topcol=temp->col;
    minheap.pop();
    ans.push_back(topElement);
    if(topcol+1<n){
    info*newinfo=new info(arr[toprow][topcol+1],toprow,topcol+1);
    minheap.push(newinfo);
    }
}
return ans;
}
int main()
{
    int arr[][4]={{2,4,6,8},{1,3,5,7},{0,9,10,11}};
    int k=3;
    int n=4;
    vector<int>ans=mergeKsortedArray(arr,k,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}