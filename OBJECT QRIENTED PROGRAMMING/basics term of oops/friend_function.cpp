#include <bits/stdc++.h>
using namespace std;
class Animal
{
private:
    int weight=5;

public:
    void eat()
    {
        cout << "currently eating" << endl;
    }
    friend class Dog;
};
class Dog
{
public:
    void bark()
    {
        cout << "barking" << endl;
    }
    void print(Animal & obj){
     cout<<"weight is :"<<obj.weight<<endl;
    }
};
int main()
{
    Animal obj;
    obj.eat();
    Dog obj1;
    obj1.print(obj);
    obj1.bark();
  
    

    return 0;
}