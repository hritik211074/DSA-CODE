#include<iostream>
using namespace std;
void decimalToBinary(int n){
    int arr[32];
    int k=0;
    while(n>0){
        arr[k]=n%2;
        k++;
        n=n/2;
    }
    for(int j=k-1;j>=0;j--){
        cout<<arr[j];
    }
}
int main(){
    int x;
    cout<<"Enter the value"<<endl;
    cin>>x;
    decimalToBinary(x);
    return 0;
}