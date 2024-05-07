
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void print(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
void removeduplicate(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return ;
    }
    if(head->next==NULL){
        cout<<"ll have no duplicate node"<<endl;
    }
    // for more than one node
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->data !=temp->next->data){
            temp=temp->next;
        }
        else{
            temp->next=temp->next->next;
        }
    }
}

int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(3);
    Node *fifth = new Node(4);
    Node *sixth = new Node(5);
    Node *seventh = new Node(5);
    Node *eighth = new Node(6);
    Node *ninth = new Node(6);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = NULL;
    print(head);
    cout<<endl;
    removeduplicate(head);
    print(head);

    
    return 0;
}
