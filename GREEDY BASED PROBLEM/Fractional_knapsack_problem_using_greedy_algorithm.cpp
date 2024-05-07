#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    double ratio1= ((1.0)*a.first)/a.second;
    double ratio2= ((1.0)*b.first)/b.second;
    return ratio1>ratio2;
}
int main()
{
    int value[]={60,100,120};
    int weight[]={10,20,30};
    int n=3;
    int capacity=50;
    vector<pair<int,int>>data;
    for(int i=0;i<n;i++){
        data.push_back(make_pair(value[i],weight[i]));
    }
    sort(data.begin(),data.end(),cmp);
    float ans=0;
    for(int i=0;i<n;i++){
        if(data[i].second<=capacity){
            ans+=data[i].first;
            capacity-=data[i].second;
        }
        else{
            double ratio= 1.0 * (data[i].first)/data[i].second;
            ans+=ratio*capacity;
            break;
        }
    }
    cout<<"maximum value we get that is->"<<ans<<endl;
    return 0;
}