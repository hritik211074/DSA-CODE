#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal is now eating"<<endl;
    }
};
class  Dog:public Animal{
    public:
    void eat(){
        cout<<"Dog is now eating"<<endl;
    }
};
int main()
{
    Animal obj1;
    Dog obj2;
    obj1.eat();
    obj2.eat();
    return 0;
}