#include <bits/stdc++.h>
using namespace std;
class Animal
{
private:
int weight;
public:
    int age;
    string name;
    void eat()
    {
        cout << "currently eating" << endl;
    }
    void run()
    {
        cout << "currently running" << endl;
    }
    void set(int w){
        weight=w;
    }
    int get(){
        return weight;
    }
};
int main()
{
    Animal obj;
    obj.age = 23;
    obj.name = "Lion";
    cout << obj.age << " " << obj.name << endl;
    obj.eat();
    obj.run();
    obj.set(60);
    cout<<"weight of obj ::"<<obj.get();
    return 0;
}