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
int maximumValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

Node *deletion_in_a_BST(Node *root, int target)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }
    // first case
    if (root->data == target)
    {
        // all four case here
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node *leftchild = root->left;
            delete root;
            return leftchild;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *rightchild = root->right;
            delete root;
            return rightchild;
        }
        else
        {
            // this node actually have left and right
            // i need a inorder predecessor of this temp
            int leftmax = maximumValue(root->left);
            root->data = leftmax;
            root->left = deletion_in_a_BST(root->left, leftmax);
            return root;
        }
    }    else if (target > root->data)
    {
        root->right= deletion_in_a_BST(root->right, target);
    }
    else if (target < root->data)
    {
        root->left= deletion_in_a_BST(root->left, target);
    }
    return root;
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
    cout << "printing the BST" << endl;
    levelOrderedTraversal(root);
    int target;
    cin >> target;
    root=deletion_in_a_BST(root, target);
    cout << "printing the BST " << endl;
    levelOrderedTraversal(root);

    return 0;
}