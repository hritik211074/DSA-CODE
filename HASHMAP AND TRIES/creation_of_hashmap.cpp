#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>hashmap;
    pair<string,int>p=make_pair("scorpio",10);
    hashmap.insert(p);
    pair<string,int>p2=make_pair("alto",9);
     hashmap.insert(p2);
     hashmap.insert({"wagnor",5});
     hashmap["fortuner"]=20;
     // if want to access some element
     cout<<hashmap["scorpio"]<<endl;
     // for traversing of map
     for(auto it:hashmap){
        cout<<it.first<<" "<<it.second<<endl;
     }
     // if want to check  count of key value pair in hash map
     cout<<hashmap.count("scorpio")<<endl;
     // find funnction in hash map
     if(hashmap.find("scorpio")!=hashmap.end()){
        cout<<"found"<<endl;
     }
     else{
        cout<<"not found "<<endl;
     }
     cout<<hashmap.size()<<endl;

return 0;
}
