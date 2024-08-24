#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    int current=-1;
    int prev1=1;
    int prev2=0;
    for(int i=2;i<=n;i++){
        current=prev1+prev2;
        prev2=prev1;
        prev1=current;
    }
    return current;
}
int main()
{
    int n;
    cin>>n;
    int ans=fibonacci(n);
    cout<<"fibonacci series of givven position is ->"<<ans<<endl;
    return 0;
}
// based upon this concept we have solved a problem of count no of ways to reach to nth stair and i am giving a link of that problem
// (https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTabValue=SUBMISSION)