#include<bits/stdc++.h>
using namespace std;
int main()
{
    // clear the bit  means to change a bit at specified position from 1 to 0
    int n;
    cin>>n;
    int ith;
    cin>>ith;
    int mask = ~(1<<ith);
    int ans=n & mask;
    cout<<"ans is->"<<ans;
    return 0;
}