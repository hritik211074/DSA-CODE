#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> >arr;
    vector<int>a{3,5,7};
    vector<int>b{7,8,6};
    arr.push_back(a);
    arr.push_back(b);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    
    }

   
    return 0;
}