#include<iostream>
using namespace std;
bool primeOrNot(int n){
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            c++;
        }
    }
    if(c>2){
        return 0;
        
    }else{
        return 1;
    }
}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    bool b=primeOrNot(num);
    cout<<b<<endl;
    return 0;
}