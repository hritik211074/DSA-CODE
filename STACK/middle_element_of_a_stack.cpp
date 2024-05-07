#include <bits/stdc++.h>
using namespace std;

int findmiddle(stack<int>& st, int& size) {
    if (st.size() == (size / 2) + 1) {
        return st.top();
    }
    int temp = st.top();
    st.pop();
    // recursive call
    int result = findmiddle(st, size);
    // backtracking
    st.push(temp);
    return result; // return the result obtained from the recursive call
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int size = st.size();
    int ans = findmiddle(st, size);
    cout << "middle: " << ans << endl;
    return 0;
}
