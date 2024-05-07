#include <bits/stdc++.h>
using namespace std;
void reversequeue(queue<int>&q){
    if(q.empty()){
        return ;
    }
 int temp=q.front();
 q.pop();
 reversequeue(q);
 q.push(temp);
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reversequeue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}