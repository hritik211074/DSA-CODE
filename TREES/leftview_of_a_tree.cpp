#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node *buildtree()
{
    int data;
    cout << "Enter the data that we want to insert in tree" << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    // follow step A,B,C
    Node *root = new Node(data);
    cout << "Enter the data for left of " << data << " node" << endl;
    root->left = buildtree();

    cout << "Enter the data for right of " << data << " node" << endl;
    root->right = buildtree();

    return root;
}
void printleftview(Node*root,vector<int>&ans,int level){
// base case
if(root==NULL){
    return;
}
if(level==ans.size()){
  ans.push_back(root->data);  
}
// left ke liye
printleftview(root->left,ans,level+1);
// right ke liye
printleftview(root->right,ans,level+1);
}

int main()
{
    Node *root = NULL;
    root = buildtree();
    int level =0;
    vector<int>ans;
    printleftview(root,ans,level);
    cout<<"printinng the answer"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}