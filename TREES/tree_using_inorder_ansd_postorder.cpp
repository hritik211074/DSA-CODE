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
Node *buildtreeusingtraversal(int inorder[],int postorder[],int size,int &postindex,int inorderstart,int inorderEnd,unordered_map<int,int>&mp){

    if(postindex<0 || inorderstart>inorderEnd){
        return NULL;
    }
    // step A
    int element=postorder[postindex];
    postindex--;  
    Node*root=new Node(element);
    // step B for finding position of element
    int pos=mp[element];
    //  step C for right part
    root->right=buildtreeusingtraversal(inorder,postorder,size,postindex,pos+1,inorderEnd,mp);
    // step D for left part
    root->left=buildtreeusingtraversal(inorder,postorder,size,postindex,inorderstart,pos-1,mp);
      
    return root;
}


int main()
{
    int inorder[]={40,20,10,50,30,60};
    int postorder[]={40,20,50,60,30,10};
    int size=6;
    int postindex=size-1;
   
    int inorderstart=0;
    int inorderEnd=size-1;
     unordered_map<int,int>mp;
    createmapping(mp,inorder,size);
    cout<<"Building tree :"<<endl;
    Node *root  = buildtreeusingtraversal(inorder,postorder,size,postindex,inorderstart,inorderEnd,mp);
    cout<<"level order traversal is :"<<endl;
    levelordertraversal(root);
    
    return 0;
}