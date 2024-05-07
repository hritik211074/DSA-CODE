#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int a=10;

        int *ptr= &a;
        int *copy=ptr;
        cout<< ptr<<endl;
        cout<< *ptr<<endl;
        cout<< copy<<endl;
        cout<< *copy<<endl;

        return 0;
    }
