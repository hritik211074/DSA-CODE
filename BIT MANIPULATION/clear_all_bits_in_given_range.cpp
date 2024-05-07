#include <bits/stdc++.h>
using namespace std;
int clearBitsInRange(int n ,int i,int j){
   int mask1 =-1<<(i+1);
   int mask2= (1<<j)-1;
   int mask= mask1 | mask2;
   return mask & n;

}
int main()
{
    int n=37;
    int ans = clearBitsInRange(n,4,1);
    cout<<"after clearing the bits->"<<ans<<endl;
    
    return 0;
}