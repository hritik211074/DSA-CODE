#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,3,6,7,8,9};
    int sizea=6;
    int brr[]={2,3,6,4,5};
    int sizeb=5;
    vector<int>crr;
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
        if(arr[i]==brr[j]){
            brr[j]=INT_MIN;
        }

        }
        }
        for(int i=0;i<sizea;i++){
         crr.push_back(arr[i]);
        }
        for(int i=0;i<sizeb;i++){
            if(brr[i]!=INT_MIN){
            crr.push_back(brr[i]);
            }
        }
        for(int i=0;i<crr.size();i++){
            cout<<crr[i]<<" ";
        }
        
        
    

return 0;
}