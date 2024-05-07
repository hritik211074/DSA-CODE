#include<iostream>
using namespace std;
void solve(int arr[]){
    // if i want to access the size of arr while passinng through function
    cout<<" size is :"<<sizeof(arr)<<endl; 
}
void util(int *ptr){
   *ptr=*ptr+1;
}
int main(){
    int arr[10]={2,4,1,2};
    cout<< "size of arr in mainn function "<<sizeof(arr)<<endl;
    solve(arr);
    int a=10;
    int *ptr =&a;
    cout<<"before"<<endl;
    cout<< a <<endl;
    cout<< ptr <<endl;
    cout<< *ptr <<endl;
    util(ptr);
    cout<<"after"<<endl;
    cout<<a<<endl;
    cout<< ptr <<endl;
    cout<< *ptr <<endl;
    return 0;
}