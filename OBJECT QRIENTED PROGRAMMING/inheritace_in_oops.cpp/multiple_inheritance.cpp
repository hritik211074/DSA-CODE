#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    int age;
    int weight;
    string color;
    car(){
        age=18;
    }
    public:
    void distance(){
        cout<<" one lakh km"<<endl;
    }

};
class bolero:public car{
  public:
  bolero(){
    age=10;
  }
  void loading(){
    cout<<"it loading 1 ton"<<endl;
  }
};
class farari:public car{
    public:
    farari(){
        age=45;
    }
 void speed(){
    cout<<"speeding"<<endl;
 }
  
};
int main()
{
   farari d1;
    d1.speed();
    d1.distance();
    cout<<d1.age<<endl;
    bolero b1;
    b1.distance();
    b1.loading();
    cout<<b1.age<<endl;
return 0;
}