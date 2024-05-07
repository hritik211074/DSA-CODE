#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    int age;
    int weight;
    string color;
    public:
    void speed(){
        cout<<"speed"<<endl;
    } 
    void distance(){
        cout<<" one lakh km"<<endl;
    }

};
class rangerover: public car{
   
};
int main()
{
    rangerover d1;
    d1.speed();
    d1.distance();
return 0;
}