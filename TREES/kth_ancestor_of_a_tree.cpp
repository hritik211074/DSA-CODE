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
bool kthancestor(Node*root ,int &k,int p){
    if(root==NULL){
        return false;
    }
    if(root->data==p){
        return true;
    }
    // check for left and right 
    bool leftans=kthancestor(root->left,k,p);
    bool rightans=kthancestor(root->right,k,p);
    // wapas aatein hue
    if(leftans||rightans){
        k--;
    }
    if(k==0){
        cout<<"answer is :"<<root->data<<endl;
        k=-1;
    }
    return leftans||rightans;
}

int main()
{
    Node *root = NULL;
    root = buildtree();
    int k=1;
    int p=4;
    bool ans=kthancestor(root,k,p);
    if(ans){
        cout<<"answer is found"<<endl;
    }else{
        cout<<"answwer is not found"<<endl;
    }
    return 0;
}