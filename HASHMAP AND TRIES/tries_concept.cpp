#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool terminal;
    TrieNode(char d){
        this->data=d;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->terminal=false;
    }
};
bool searchWord(TrieNode* root,string word){
    if(word.size()==0){
        return root->terminal;
    }
    char ch=word[0];
    int index=ch-'a';
    TrieNode *child;
    // present
    if(root->children[index]!=NULL)
    {
    child=root->children[index];
    }
    else
    {
    //not present
    return false;
   }
   return searchWord(child,word.substr(1));

}
void insertWord(TrieNode* root,string word){
// base case
if(word.size()==0){
    root->terminal=true;
    return ;
}
char ch=word[0];
int index=ch-'a';
TrieNode *child;
// present
if(root->children[index]!=NULL)
{
    child=root->children[index];
}
else{
    // not present
    child=new TrieNode(ch);
    root->children[index]=child;
}
 insertWord(child,word.substr(1));   
 
}
int main()
{
    TrieNode* root=new TrieNode('-');
    insertWord(root,"coding");
    insertWord(root,"code");
    insertWord(root,"hritik");
    insertWord(root,"manav");
    insertWord(root,"rajeev");
    insertWord(root,"rahul");
    insertWord(root,"adarsh");
    insertWord(root,"love");
    cout<<"we want to search something"<<endl;
    if(searchWord(root,"coding")){
        cout<<"found in tries"<<endl;
    }
    else{
        cout<<"not found in tries"<<endl;
    }
    return 0;
}