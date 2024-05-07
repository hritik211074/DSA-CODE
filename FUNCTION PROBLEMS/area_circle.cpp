#include<iostream>
using namespace std;
float areaCircle(float radius){
    float area=3.14*radius*radius;
    return area;
}
int main(){
    float r;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    cout<<areaCircle(r);
    return 0;
}