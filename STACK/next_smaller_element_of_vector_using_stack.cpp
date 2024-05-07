#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    ans.push_back(2);
    ans.push_back(3);
    ans.push_back(1);
    ans.push_back(4);
    ans.push_back(6);
    ans.push_back(3);
    vector<int> result;
    stack<int> st;
    st.push(-1);
    int i = 5;
    while(i>=0){
        while (st.top() >= ans[i])
        {
            st.pop();
        }
        result.push_back(st.top());
        st.push(ans[i]);
        i--;
    }
    reverse(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}