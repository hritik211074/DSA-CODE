#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={2,4,3,1,6,7,5};
    int sizea=7;
    int brr[]={2,3,9,6};
    int sizeb=4;
    vector<int>crr;
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(arr[i]==brr[j]){
                crr.push_back(arr[i]);
            }

        }
    }
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}