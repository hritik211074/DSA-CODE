#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,5,4,3,7,6,2,8};
    int size=8;
    int sum=9;
   
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==9){
                cout<<arr[i]<<" "<<arr[j]<<" "<<endl;
            }
        }
    }
    return 0;
}