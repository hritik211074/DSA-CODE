#include <bits/stdc++.h>
using namespace std;
class Animal
{
private:
int weight;
string type;
public:
  ~Animal(){
        cout<<"Inside destructor"<<endl;
    }
// defalut constructor
Animal(){
    this->weight=10;
    this->type="xyz";
    cout<<"constructor called"<<endl;
}

  
    void print(){
        cout<<"weight is ->"<<weight<<endl;
        cout<<"type is->"<<type<<endl;
    }
  
   
};
int main()
{
    
   Animal suresh;
   suresh.print();
   Animal * mani=new Animal();
   // manually
   delete mani;
    return 0;
}