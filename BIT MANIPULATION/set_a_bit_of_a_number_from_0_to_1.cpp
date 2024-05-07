#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ith;
    cin>>ith;
    int mask = 1<<ith;
    int ans=n|mask;
    cout<< "after setting a bit->"<<ans<<endl;
    return 0;
}