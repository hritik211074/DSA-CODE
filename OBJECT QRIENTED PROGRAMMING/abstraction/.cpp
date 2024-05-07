#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int x,y;
    void print()const{
        cout<<x<<" "<<y<<endl; 
    }
};
int main()
{
    Animal obj={1,2};
    obj.print();

return 0;
}