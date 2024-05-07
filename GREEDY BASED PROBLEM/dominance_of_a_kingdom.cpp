#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y>>n;
    int t=n;
    vector<int>row;
    vector<int>col;
    row.push_back(0);
    col.push_back(0);
    while(t--){
        int a,b;
        cin>>a>>b;
        row.push_back(a);
        col.push_back(b);
    }
     row.push_back(x+1);
     row.push_back(y+1);
     sort(row.begin(),row.end());
     sort(col.begin(),col.end());
     int maxLen=INT_MIN;
     for(int i=1;i<row.size();i++){
        int a=row[i];
        int  b=row[i-1];
        maxLen=max(maxLen,a-b-1);
     }
      int maxWidth=INT_MIN;
     for(int i=1;i<col.size();i++){
        int a=col[i];
        int  b=col[i-1];
        maxWidth=max(maxWidth,a-b-1);
     }
     cout<<"maximum cell in a grid ->"<<maxLen*maxWidth<<endl;
    return 0;
}