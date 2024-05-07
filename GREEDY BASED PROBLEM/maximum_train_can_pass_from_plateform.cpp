#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
  return b.second > a.second;
}
int solve(int n ,int ar[],int dep[]){
  vector<pair<int,int>>data;
  for(int i=0;i<n;i++){
    data.push_back(make_pair(ar[i],dep[i]));
  }
    sort(data.begin(),data.end(),cmp);
    int count=1;
    int departure=data[0].second;
    for(int i=1;i<n;i++){
      if(data[i].first>=departure){
        departure=data[i].second;
        count++;
      }
    }
    return count;
}
int main()
{
   int n=4;
   int ar[]={5,8,2,4};
   int dep[]={7,11,6,5};
   int answer= solve(n,ar,dep);
   cout<<"Answer is->"<<answer<<endl;

   return 0;
}