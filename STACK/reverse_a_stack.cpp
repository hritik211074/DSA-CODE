#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int &target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtBottom(st, target);
    st.push(temp);
}
void reversestack(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }

    int target = st.top();
    st.pop();
    reversestack(st);
    insertAtBottom(st, target);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    reversestack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
