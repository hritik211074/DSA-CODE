#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);
    dq.push_back(50);
    cout<<"size of deque is :"<<dq.size()<<endl;
    dq.pop_back();
    cout<<"size of deque is :"<<dq.size()<<endl;
    dq.pop_front();
    cout<<"size of deque is :"<<dq.size()<<endl;
    cout<<dq.front();
    return 0;
}