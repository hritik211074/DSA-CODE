#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ropeLen[]={4,3,2,6};
    int n=4;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(ropeLen[i]);
    }
    if(pq.size()==1){
        cout << pq.top()<<endl;
        pq.pop();
    }
    int ans=0;
    while(pq.size()!=1){
        int miniCost=0;
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();   
        
        miniCost=(a+b);
        ans+=miniCost;
        pq.push(miniCost);
    }
    cout<<"minimum cost to combine all pieces of ropes ->"<<ans<<endl;
    return 0;
}