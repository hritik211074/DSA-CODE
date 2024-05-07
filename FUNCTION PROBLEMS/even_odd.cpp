#include<iostream>
using namespace std;
void evenOrOdd(int a){
    if(a%2==0){
        cout<<"Entered number is even number"<<endl;
    }
    else{
        cout<<"Entered number is odd number"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    evenOrOdd(num);
    return 0;
}