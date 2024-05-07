#include<bits/stdc++.h>
using namespace std;
class Animal{
 public:
 int age;
 string name;
 void eat(){
    cout<<"currently eating"<<endl;
 }
 void run(){
    cout<<"currently running"<<endl;
 }
};
int main()
{  
    Animal obj;
    obj.age=23;
    obj.name="Lion";
    cout<<obj.age<<" "<<obj.name<<endl;
    obj.eat();
    obj.run();
    cout<<"size of object :"<<sizeof(obj);
    cout<<"size of class :"<<sizeof(Animal);
   return 0;
}