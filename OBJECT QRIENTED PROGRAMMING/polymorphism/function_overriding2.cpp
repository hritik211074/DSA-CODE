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
    Animal *obj=new Dog();
    obj->eat();
    return 0;
}