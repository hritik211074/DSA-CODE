#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &st, int &target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st, target);
    st.push(temp);
}
void insertAtBottom(stack<int> &st)
{
    if (st.empty())
    {
        cout << "cannot insert at bottom" << endl;
        return;
    }
    int target = st.top();
    st.pop();
    solve(st, target);
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

    insertAtBottom(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
