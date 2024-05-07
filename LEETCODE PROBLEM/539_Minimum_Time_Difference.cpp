   #include<bits/stdc++.h>
   using namespace std;
   int main(){
       vector<string>timePoints{"24:23","12:34","1:21"};

       vector<int>ans;
       for(int i=0;i<timePoints.size();i++)
       {
       string str=timePoints[i];
       int hours=stoi(str.substr(0,2));
       int minutes=stoi(str.substr(3,2));
       int total_minutes=60*hours+minutes;
       ans.push_back(total_minutes);
       }
       int mini=INT_MAX;
       sort(ans.begin(),ans.end());
       for(int i=0;i<ans.size()-1;i++)
       {
       int diff=ans[i+1]-ans[i];
       mini=min(mini,diff);
       }
       int lastdiff1=ans[0]+1440-ans[ans.size()-1];
       int lastdiff2=ans[ans.size()-1]-ans[0];
       int lastdiff=min(lastdiff1,lastdiff2);
       mini=min(mini,lastdiff);
       cout<<"minimum time difference is-->>"<< mini<<endl;
       return 0;
   }