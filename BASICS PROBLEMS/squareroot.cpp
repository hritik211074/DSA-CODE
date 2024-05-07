#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int b=0;
    for(int i=1;i<=num;i++){
      if(i*i==num){
        b=i;
        break;
      }  else if(i*i<num){
        b=i;
        continue;
      }
    }
    cout<<"suareroot is"<<b<<endl;
    return 0;
}