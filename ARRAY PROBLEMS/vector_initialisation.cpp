#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr(8,vector<int>(5,-8));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
       vector<vector<int>>brr(8,vector<int>{3,5,6,7,8});
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr[i].size();j++){
            cout<<brr[i][j];
        }
        cout<<endl;
    }
    return 0;
}