#include<bits/stdc++.h>
using namespace std;
int main()
{  
    // normal approach
   const int *a=new int (19);
   cout<<*a<<endl;
   // we cannot change value of *a
   // but we can change value of *a by passing the reference of another value
   int b=12;
   a=&b;
   cout<<*a<<endl;

   return 0;
}