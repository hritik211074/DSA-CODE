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
void levelOrderedTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
Node* BSTUsingInorder(int inorder[],int start,int end){
    if(start>end){
        return NULL;
    }
    // Find mid index of inorder
    int mid=(start+end)/2;
    int element=inorder[mid];
    Node *root=new Node(element);
    // left call 
    root->left=BSTUsingInorder(inorder,start,mid-1);
    // right call
    root->right=BSTUsingInorder(inorder,mid+1,end);
    return root;
}
int main()
{
    int inorder[]={1,2,3,4,5,6,7,8,9};
    int start=0;
    int end=8;
    Node *root =BSTUsingInorder(inorder,start,end);
    levelOrderedTraversal(root);

    return 0;
}