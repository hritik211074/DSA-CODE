#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    int sum(int a,int b,int c){
        return a+b+c;
    }
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b,int c,int d){
        return a+b+c+d;
    }
};
int main()
{
    person obj;
    cout<<obj.sum(2,3,4)<<endl;
    cout<<obj.sum(1,2,34,5)<<endl;
    cout<<obj.sum(2,3)<<endl;
return 0;
}