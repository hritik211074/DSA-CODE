#include <bits/stdc++.h>
using namespace std;
void insertsort(stack<int>&st,int target){
    if(st.empty()){
        st.push(target);
        return;
    }
    if(st.top()>=target){
        st.push(target);
        return;
    }
    int temp=st.top();
    st.pop();
    insertsort(st,target);
    st.push(temp);
}
void sortStack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();
    sortStack(st);
    insertsort(st,temp);
}

int main()
{
    stack<int> st;
    st.push(30);
    st.push(40);
    st.push(55);
    st.push(45);
    st.push(24);
    st.push(11);
   
    sortStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
