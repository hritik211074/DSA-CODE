#include <bits/stdc++.h>
using namespace std;
int main()
{
    // creation of queue
    queue<int> q;
    // insertion in queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // basically we want to check queue is empty or not
    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }
    cout << "queue size" << q.size() << endl;
    // find front element of queue
    cout << q.front() << endl;
    // find last element of queue

    cout << q.back() << endl;
    // traverse the queue
    // deletion in queue
    q.pop();
    return 0;
}