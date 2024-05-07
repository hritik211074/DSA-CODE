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
void printBottomView(Node*root){
    if(root==NULL){
        return ;
    }
    // create a map to store node with its diatance
    map<int,int>bottomNode;
    // level order traversal
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int>temp=q.front();
        q.pop();
        Node*frontNode=temp.first;
        int hd=temp.second;
        // just push the data of a node with upadated hd
        bottomNode[hd]=frontNode->data;
     
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
          if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    cout<<"printing all bottomview node of a tree"<<endl;
    for(auto it:bottomNode){
        cout<<it.first<<" "<<it.second<<endl; 
    }
}

int main()
{
    Node *root = NULL;
    root = buildtree();
    printBottomView(root);
    return 0;
}