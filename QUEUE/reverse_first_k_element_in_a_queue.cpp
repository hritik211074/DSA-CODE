#include <bits/stdc++.h>
using namespace std;
void reversefirstkqueue(queue<int> &q, int k)
{
    int n = q.size();
    if (k == 0 && k > n)
    {
        return;
    }

    stack<int> st;
    int count = 0;
    while (!q.empty() && count < k)
    {
        int temp = q.front();
        q.pop();
        st.push(temp);
        count++;
    }
    while (!st.empty())
    {
        int temp = st.top();
        st.pop();
        q.push(temp);
    }
    count = 0;
    while (count < n - k)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
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
    reversefirstkqueue(q, 3);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}