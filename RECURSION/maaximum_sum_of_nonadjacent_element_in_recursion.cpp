#include<bits/stdc++.h>
using namespace std;
void maximumsum(vector<int>nums,int i,int &maxi,int sum){
    if(i>=nums.size()){
        maxi=max(maxi,sum);
        return;
    }
    // include
    maximumsum(nums,i+2,maxi,sum+nums[i]);
    //  exclude
    maximumsum(nums,i+1,maxi,sum);
}
int main()
{
   int n;
   cin>>n;
   vector<int>nums(n);
   for(int i=0;i<n;i++){
    cin>>nums[i];
   } 
   int sum=0;
   int i=0;
   int maxi=INT_MIN;
   maximumsum(nums,i,maxi,sum);
   cout<<"maximum sum is: "<<maxi<<endl;
   return 0;
}