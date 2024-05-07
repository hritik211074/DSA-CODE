#include<bits/stdc++.h>
using namespace std;
class Animal{
    private:
    int age;
    int weight;
    public:
    void get(){
        cout<<"Age :"<<age<<endl;
        cout<<"weight is:"<<weight<<endl;
    }
    void set(int age,int weight){
        this->age=age;
        this->weight=weight;
    }

};
int main()
{
    Animal obj;
    obj.set(12,36);
    obj.get();
   
   return 0;
}