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
void postorderTraversal(Node *root)
{
   if(root==NULL){
    return ;
   }
   // LRNit means left node right
    
   postorderTraversal(root->left);
  
   postorderTraversal(root->right);
   cout<<root->data<<" ";
}
int main()
{
    Node *root = NULL;
    root = buildtree();
    postorderTraversal(root);
    (root);
    return 0;
}