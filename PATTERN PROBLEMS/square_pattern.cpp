#include<iostream>
using namespace std;
int main(){
int side;
cout<<"Enter the side of square"<<endl;
cin>>side;
for(int i=0;i<side;i++){
    for(int j=0;j<side;j++){
        cout<<"* ";
    }
    cout<<endl;
}
    return 0;
}