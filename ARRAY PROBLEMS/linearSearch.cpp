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
    int arr[]={1,3,4,5,6,7};
    int size =6;
    cout<<"Enter the value of key"<<endl;
    int key; 
    cin>>key;
    bool a=linearSearch(arr,size,key);
    if(a==true){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}