#include<bits/stdc++.h>
using namespace std;
void clearithbit(int &n,int i){
    int mask = ~(1<<i);
    n=n & mask;
}
void update(int &n,int i,int target){
clearithbit(n,i);
int mask=target<<i;
int ans=mask|n;
cout<<"answer is->"<< ans;
}
int main()
{
   int n=10;
   update(n,0,1);
   return 0;
}