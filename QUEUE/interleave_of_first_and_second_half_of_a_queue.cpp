#include <bits/stdc++.h>
using namespace std;
void innterleaveOfQueue(queue<int> &q)
{
    int n = q.size();
    queue<int> qq;
    stack<int> st;
    int count = 0;
    if(n==1 || n==2){
        return ;
    }
    while (!q.empty() && count < n / 2)
    {
        int temp = q.front();
        q.pop();
        qq.push(temp);
        count++;
    }
    while (!qq.empty())
    {
        int temp1 = q.front();
        int temp2 = qq.front();
        q.pop();
        qq.pop();
        q.push(temp2);
        q.push(temp1);
    }
    if(n%2!=0){
        int temp=q.front();
        q.pop();
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
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    

    innterleaveOfQueue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}