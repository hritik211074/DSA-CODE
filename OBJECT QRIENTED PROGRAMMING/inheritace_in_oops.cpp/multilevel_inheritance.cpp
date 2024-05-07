#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    int age;
    int weight;
    string color;
    public:
    void speed(){
        cout<<"speed up"<<endl;
    } 
    void distance(){
        cout<<" one lakh km"<<endl;
    }

};
class rangerover: public car{
  public:
  int milage; 
};
class farari:public rangerover{
    public :
    int price;
};
int main()
{
   farari d1;
    d1.speed();
    d1.distance();
    cout<<d1.age<<" "<<d1.weight<<" "<<d1.color<<" "<<d1.milage<<" "<<d1.price<<endl;
return 0;
}