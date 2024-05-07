#include<iostream>
using namespace std;
bool searchKey(int arr[][3],int row,int cols,int key){
     for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3];
    int row=3;
    int cols=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"Enter a key to search"<<endl;
    cin>>key;
    cout<<searchKey(arr,row,cols,key)<<endl;
   
    return 0;
}