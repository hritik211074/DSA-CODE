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
bool searching(Node *root, int target)
{
    if (root == NULL)
    {
        return false;
    }
    if(root->data==target){
        return true;
    }
    if (target > root->data)
    {
        return searching(root->right, target);
    }
    else
    {
        return searching(root->left, target);
    }
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
    int target;
    cin >> target;
    bool ans = searching(root, target);
    if (ans)
    {
        cout << "target found" << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }
    return 0;
}