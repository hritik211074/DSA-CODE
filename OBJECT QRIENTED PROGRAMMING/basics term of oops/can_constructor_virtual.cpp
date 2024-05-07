#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    // we cannot made Animal constructor as a virtual
    Animal()
    {
        cout << "Animal constructor" << endl;
    }
  virtual ~Animal(){
     cout<<"Animal destructor"<<endl;
   }
};
class Dog:public Animal{
    public:
    Dog(){
        cout<<"Dog constructor"<<endl;
    }
    ~Dog(){
        cout<<"Dog destructor"<<endl;
    }
};
int main()
{
   Animal * suresh=new Dog();
   delete suresh;
    return 0;
}