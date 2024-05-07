#include <bits/stdc++.h>
using namespace std;
int countSetBitFast(int  n){
 // this take much time as compared to below one
    int count = 0;
    while (n > 0)
    {
        n=(n&(n-1));
        count++;
    }
    return count;
}
int countSetBitSLow(int n)
{
    // this take log (n) time 
    int count = 0;
    while (n > 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}
int main()
{
    int n = 10;
    int ans1=countSetBitFast(n);
    int ans2 = countSetBitSLow(n);
    cout << "slower approach to find number of set bit is-> " << ans2 << endl;
    cout << "Faster approach to find number of set bit is-> " << ans1 << endl;
    return 0;
}