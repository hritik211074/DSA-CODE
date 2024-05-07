#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<arr<<endl;
    cout<<&arr<<endl;
    for(int i=1;i<=n;i++){
        cout<<&arr[i]<<endl;
    }

    return 0;
}