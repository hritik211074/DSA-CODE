#include<bits/stdc++.h>
using namespace std;
int main()
{
    int var=10;
    int *ptr= &var;
    // if i want to access address  of var
    cout<< &var<<endl;
    // if i want to access ptr
    cout<< ptr<<endl;
    // if i want to access ptr which  pointing to variable 
    cout<< *ptr <<endl;
    cout<<& ptr<<endl;
     cout<<" size of integer ptr : "<<sizeof(ptr)<<endl;
    double d=56.77;
    double *dbr= &d;
    cout<<"size of double dbr : "<<sizeof(dbr)<<endl;
    return 0;
}