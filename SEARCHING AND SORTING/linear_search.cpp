#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
        for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
        } 
    return false;
}
int main(){
    int arr[]={3,5,4,1,2,9,7,6,8};
    int size=9;
    int key=11;
    if(linearSearch(arr,size,key))
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}