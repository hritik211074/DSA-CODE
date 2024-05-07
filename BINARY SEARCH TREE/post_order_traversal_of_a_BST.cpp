#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void postorderTraversal(Node *root)
{
   if(root==NULL){
    return ;
   }
   postorderTraversal(root->left);
   postorderTraversal(root->right);
   cout<<root->data<<" ";
}
Node*insertIntoBSt(Node*root,int data){
    if(root==NULL){
        // this is my first node
        root=new Node(data);
        return root;
    }
    // if next node is smaller than root node then 
    if(root->data>data){
        root->left=insertIntoBSt(root->left,data);
    }
    else{
        root->right=insertIntoBSt(root->right,data);
    }
    return root;
}
void takeInput(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBSt(root,data);
        cin>>data;
    }
}
int main()
{
    Node *root=NULL;
    cout<<"Enter the Node value"<<endl;
    takeInput(root);
    cout<<"postorder traversal of BST :"<<endl;
    postorderTraversal(root);
return 0;
}