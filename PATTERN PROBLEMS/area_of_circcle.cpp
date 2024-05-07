#include<iostream>
using namespace std;
float areaCircle(int r){
    float pi=3.14;
    int area=pi*r*r;
    return area;
}
int main(){
    int radius;
    cout<<"Enter the value of radius"<<endl;
    cin>>radius;
    float area=areaCircle(radius);
    cout<<"Area of circle is"<<area<<endl;
    return 0;
}