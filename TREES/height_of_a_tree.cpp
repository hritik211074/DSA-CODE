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
int heightOfTree(Node *root)
{
   if(root==NULL){
      return 0;
      }
   int leftheight=heightOfTree(root->left);
   int rightheight=heightOfTree(root->right);
   return max(leftheight,rightheight)+1;
}
int main()
{
    Node *root = NULL;
    root = buildtree();
  
    int height=heightOfTree(root);
    cout<<"height of the tree is "<<height<<endl;
    return 0;
}