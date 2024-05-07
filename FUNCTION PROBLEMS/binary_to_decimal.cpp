#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n){
    int dec=0;
    int k=0;
    while(n>0){
        int bit=n%10;
        dec=dec+bit*pow(2,k++);
        n=n/10;
    }
    return dec;

}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<binaryToDecimal(n);
    return 0;
}