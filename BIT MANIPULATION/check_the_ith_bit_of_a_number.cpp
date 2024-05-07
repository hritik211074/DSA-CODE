#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set the bit  means to change a bit at specified position from 0 to 1
    int n;
    cin>>n;
    int ith;
    cin>>ith;
    int mask = 1<<ith;
    if(n & mask){
        cout<<"ith bit of a given number is 1"<<endl;
    }
    else{
         cout<<"ith bit of a given number is 0"<<endl;
    }
    return 0;
}