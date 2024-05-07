#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=8;
    int m=5;
    int arr[]={3,4,1,9,56,7,9,12};
    sort(arr,arr+n);
    int i=0;
    int j=m-1;
    int diff=INT_MAX;
    while(j<n){
        int newDiff=arr[j]-arr[i];
        diff=min(diff,newDiff);
        i++;
        j++;
    }
    cout<<"minimum difference is->"<<diff<<endl;
    return 0;
}