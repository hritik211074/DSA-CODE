#include <bits/stdc++.h>
using namespace std;
void reversequeue(queue<int>&q){
 stack<int>st;
 while(!q.empty()){
    int temp=q.front();
     q.pop();
    st.push(temp);
    
 }
 while(!st.empty()){
    int temp= st.top();
    st.pop();
    q.push(temp);
 }
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