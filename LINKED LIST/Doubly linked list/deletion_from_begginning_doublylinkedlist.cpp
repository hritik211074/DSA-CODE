#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL; 
    }
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};
int getLength(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
void print(Node * & head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deletionAt(Node* &head,Node* &tail,int position){
    int len=getLength(head);
    if(len>position)
    {
        cout<<"enter a valid position to delete"<<endl;
    }
    if(head==NULL)
    {
        cout<<"we cannot delete node from linked list"<<endl;
        return;
    }
    if(head->next==NULL){
       Node *temp=head;
       head=NULL;
       tail=NULL;
       delete temp;
       return ;
    }
    //if position is one means from  beginnig
    if(position==1){
       Node *temp=head;
       head=head->next;
       head->prev=NULL;
       temp->next=NULL;
       delete temp;
       return ;  
    }
    // deletion from last
    if(position==len){
        Node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    // deletion from any random position
     // finding left and right and current node
     int i=1;
     Node *left=head;
     while(i<position-1){
        left=left->next;
        i++;
     }
     Node *current=left->next;
     Node * right=current->next;
     left->next=right;
     right->prev=left;
     current->next=NULL;
     current->prev=NULL;
     delete current;

 
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *head=first;
    Node*tail=third;
    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    third->next=fourth;
    fourth->prev=third;

    cout<<"travesing the linked list"<<endl;

    print(first);
    cout<<endl;

    deletionAt(head,tail,2);
    cout<<"again traversing"<<endl;
    print(head);
   
    return 0;
}