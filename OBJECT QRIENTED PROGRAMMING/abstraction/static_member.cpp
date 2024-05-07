#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    static int x,y;
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};
int Animal::x;
int Animal::y;
int main()
{
    Animal obj1,obj2;
    obj1.x=1;
    obj1.y=2;
    obj1.print();
    obj2.x=10;
    obj2.y=20;
    obj2.print();
    obj1.print();
    obj2.print();
    return 0;
}