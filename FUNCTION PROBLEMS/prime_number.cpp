#include<iostream>
using namespace std;
void prime(int a){
   
    for(int i=1;i<=a;i++){
        int b=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                b++;
            }
        }
            if(b==2){
                cout<<i<<" ";
            }
        }

        }
    

int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    prime(num);
    return 0;
}