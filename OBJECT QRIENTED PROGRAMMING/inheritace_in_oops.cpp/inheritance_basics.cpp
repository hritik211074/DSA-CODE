#include<bits/stdc++.h>
using namespace std;
class Animal{
    protected:
    int age;
    int weight;
    public:
    void eat(){
        cout<<"eating"<<endl;
    } 

};
class dog: public Animal{
    public:
    void print(){
        cout<<age<<endl;
        cout<<weight<<endl;
    }
};
int main()
{
    dog d1;
    d1.eat();
    d1.print();
return 0;
}