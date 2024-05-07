#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int a=10;
    int * ptr=&a;
    int ** qtr=&ptr;
    cout<< a<<endl;
    cout<< &a <<endl;
    cout<< ptr<<endl;
    cout<<*ptr<<endl;
    cout<< qtr<<endl;
    cout<<*qtr<<endl;
    cout<<**qtr<<endl;
   return 0;  
}