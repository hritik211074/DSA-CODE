#include <bits/stdc++.h>
using namespace std;
class Animal
{
private:
int weight;
string type;
public:
// defalut constructor
Animal(){
    this->weight=10;
    this->type="xyz";
    cout<<"constructor called"<<endl;
}
// paramatrized constructor
int value;
Animal(int a,int b){
 value=a+b;
}
// copy constructor
Animal(Animal & obj){
    this->weight=obj.weight;
    this->type=obj.type;
    cout<<"I am in copy constructor"<<endl;

}
  
    void print(){
        cout<<"weight is ->"<<weight<<endl;
        cout<<"type is->"<<type<<endl;
        cout<<"value is->"<<value<<endl;
    }
   
};
int main()
{
    Animal a(10,20);
     a.print();
   Animal * suresh=new Animal();
   suresh->print();
    Animal c=a;
   Animal d(*suresh);
  
    return 0;
}