#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "size of stack is :" << st.size() << endl;
    cout << "top of stack is :" << st.top() << endl;
    st.pop();
    if (st.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
    cout << "again top of stack is:" << st.top() << endl;
    return 0;
}