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
void printLeftBoundary(Node* root){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    cout<<root->data<<" ";
    // first left ki call after right ki call 
    if(root->left){
      printLeftBoundary(root->left);
    }else{
     printLeftBoundary(root->right);
    }
   

}
void printLeafBoundary(Node*root){
    if(root==NULL){
        return ;
    }
     if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    

}
void printRightBoundary(Node*root){
       if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    //  first right ki call and after left ki call
    if(root->right){
      printRightBoundary(root->right);
    }else{
     printRightBoundary(root->left);
    }
     cout<<root->data<<" ";
  
}
void bounndaryTraversal(Node*root){
// base case
if(root==NULL){
    return;
}
cout<<root->data<<" ";
// step A
printLeftBoundary(root->left);
// step B
printLeafBoundary(root);
//step C
printRightBoundary(root->right);


}

int main()
{
    Node *root = NULL;
    root = buildtree();
   
    bounndaryTraversal(root);
    cout<<"printinng the answer"<<endl;
    return 0;
}