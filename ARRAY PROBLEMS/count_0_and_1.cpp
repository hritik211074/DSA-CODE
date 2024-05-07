#include<iostream>
using namespace  std;
int main(){
    int arr[]={0,1,1,0,0,1,0,0,0,1,1,0};
    int size=12;
    int num0=0;
    int num1=0;
    for(int i=0;i<size;i++){
    if(arr[i]==1){
        num1++;
    }else{
        num0++;
    }
    }
    cout<<"Number of 1 is:"<<num1<<endl;
    cout<<"Number of 0 is:"<<num0<<endl;
    return 0;
}