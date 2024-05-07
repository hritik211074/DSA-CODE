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
void print(Node * & head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtTail(Node* &head , Node* &tail,int data){
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
        
    }else{
        // creat Node
         Node *newNode=new Node(data);
         // point newNode to head 
         tail->next=newNode;
         // head prev is pointed to newNode
         newNode->prev=tail;
         // head is now pointing to NewNode
         tail= newNode;

    }
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head=first;
    Node*tail=third;
    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    cout<<"travesing the linked list"<<endl;

    print(first);
    cout<<endl;

    insertAtTail(head,tail,5);
    cout<<"again traversing"<<endl;
    print(head);
   
    return 0;
}