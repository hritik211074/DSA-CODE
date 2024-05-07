#include<iostream>
using namespace std;
bool binarySearch(int arr[5][4],int row,int col,int key){
    int start=0;
    int end=row*col-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int rowIndices=mid/col;
        int colIndices=mid%col;
        if(arr[rowIndices][colIndices]==key){
            cout<<"found at"<<rowIndices<<" "<<colIndices<<endl;
            return true;
        }
        else if(arr[rowIndices][colIndices]>key){
           end=end-1;
        }else{
           start=mid+1;
        }
    }
    return false;
}
int main(){
    int arr[5][4]={{2,3,4,5},{12,23,34,44},{45,46,48,49},{51,52,55,56},{61,63,64,66}};
    int row=5,col=4;
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    bool ans=binarySearch(arr,row,col,key);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}