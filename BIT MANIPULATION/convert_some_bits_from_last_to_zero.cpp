#include<bits/stdc++.h>
using namespace std;
void update(int &n,int last){
int allone = -1<<last;

n= n&allone;
}
int main()
{
   int n=10;
   int last=3;
   update(n,last);
   cout<<"after updating the n "<<n<<endl;
   return 0;
}