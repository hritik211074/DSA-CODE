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
void levelordertraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void createmapping(unordered_map<int,int>&mp,int inorder[],int n){
    for(int i=0;i<n;i++){
        mp[inorder[i]]=i;
    }
}
Node *buildtreeusingtraversal(int inorder[],int preorder[],int size,int &preindex,int inorderstart,int inorderEnd, unordered_map<int,int>&mp){

    if(preindex>=size || inorderstart>inorderEnd){
        return NULL;
    }
    // step A
    int element=preorder[preindex++];
    Node*root=new Node(element);
    // step B for finding position of element
    int pos=mp[element];
    //  step C for left part
    root->left=buildtreeusingtraversal(inorder,preorder,size,preindex,inorderstart,pos-1,mp);
    root->right=buildtreeusingtraversal(inorder,preorder,size,preindex,pos+1,inorderEnd,mp);
    return root;
}


int main()
{
    int inorder[]={40,20,50,10,60,30,70};
    int preorder[]={10,20,40,50,30,60,70};
    int preindex=0;
    int size=7;
    int inorderstart=0;
    int inorderEnd=size-1;
    unordered_map<int,int>mp;
    createmapping(mp,inorder,size);
    Node *root  = buildtreeusingtraversal(inorder,preorder,size,preindex,inorderstart,inorderEnd,mp);
    cout<<"Building tree :"<<endl;
    cout<<"level order traversal is :"<<endl;
    levelordertraversal(root);
    
    return 0;
}