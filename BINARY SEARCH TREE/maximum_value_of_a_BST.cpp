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
        this->left = NULL;
        this->right = NULL;
    }
};
int maximumValue(Node*root){
    Node*temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
Node *insertIntoBSt(Node *root, int data)
{
    if (root == NULL)
    {
        // this is my first node
        root = new Node(data);
        return root;
    }
    // if next node is smaller than root node then
    if (root->data > data)
    {
        root->left = insertIntoBSt(root->left, data);
    }
    else
    {
        root->right = insertIntoBSt(root->right, data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBSt(root, data);
        cin >> data;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter the Node value" << endl;
    takeInput(root);
    int ans=maximumValue(root);
    cout<<"minimum value of BST "<<ans<<endl;
    return 0;
}