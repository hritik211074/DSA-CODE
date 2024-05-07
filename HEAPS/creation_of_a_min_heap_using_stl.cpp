#include <bits/stdc++.h>
using namespace std;
int main()
{
    // it is nothing but a max heap -> it means that we can create a max heap using stl container priority queue
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(40);
    pq.push(20);
    pq.push(5);
    pq.push(20);
    pq.push(5);
    cout<<"I want to check top element: "<<pq.top()<<endl;
    // here top element represent a high priority element in queue which is greatest in queue
    pq.pop();
    cout<<"I want to check top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"I want to check top element: "<<pq.top()<<endl;
    cout<<"if i want to check a size of queue is ->"<<pq.size()<<endl;
    if(pq.empty()){
      cout<<"priority queue is empty now "<<endl;
    }
    else{
         cout<<"priority queue is not empty now "<<endl;
    }

    return 0;
}