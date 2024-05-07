#include <bits/stdc++.h>
using namespace std;
vector<int> previoussmaller(vector<int> &ans)
{
    vector<int> result;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < ans.size(); i++)
    {
        while (st.top() != -1 && ans[st.top()] >= ans[i])
        {
            st.pop();
        }
        result.push_back(st.top());
        st.push(i);
    }
    return result;
}
vector<int> nextsmaller(vector<int> &ans)
{
    vector<int> result;
    stack<int> st;
    st.push(-1);
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        while (st.top() != -1 && ans[st.top()] >= ans[i])
        {
            st.pop();
        }
        result.push_back(st.top());
        st.push(i);
    }
     reverse(result.begin(), result.end());
    return result;
}
int main()
{
    vector<int> ans;
    ans.push_back(2);
    ans.push_back(3);
    ans.push_back(1);
    ans.push_back(4);
    ans.push_back(6);
    ans.push_back(3);

    vector<int> result1 = previoussmaller(ans);
    vector<int> result2 = nextsmaller(ans);
    int maxarea = INT_MIN;
    for(int i=0;i<result2.size();i++){
        if(result2[i]==-1){
            result2[i]=ans.size();
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
            int area = (result2[i] - result1[i] - 1) * ans[i];
            maxarea = max(maxarea, area);
    }
    cout << "maximum area of rctangular histogram is : " << maxarea << endl;
    return 0;
}