#include <bits/stdc++.h>
using namespace std;
class Animal
{
private:
int weight;
public:
    int age;
    void eat()
    {
        cout << "currently eating" << endl;
    }
    void run()
    {
        cout << "currently running" << endl;
    }
    void set(int weight){
        this->weight=weight;
    }
    int get(){
        return weight;
    }
};
int main()
{
   Animal * suresh=new Animal();
     (*suresh).age=45;
     cout<<(*suresh).age<<endl;
    (*suresh).run();
     (*suresh).eat();
    (*suresh).set(45);
    cout<<"weight is->"<<(*suresh).get()<<endl;
    suresh->age=45;
    cout<<suresh->age<<endl;
    suresh->run();
    suresh->eat();
    suresh->set(45);
    cout<<"weight is:"<<  suresh->get()<<endl;
    return 0;
}