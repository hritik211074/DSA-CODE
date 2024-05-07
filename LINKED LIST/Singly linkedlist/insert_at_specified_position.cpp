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
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}
int findLength(Node *&head)
{
    Node *ptr = head;
    int length = 0;
    while (ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    return length;
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

void insertAtPosition(int data,int position,Node *&head, Node *&tail)
{
    // cheacking linked list is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // if positon is zero then we have to insert at starting of linked list then we call insertAtHead
    if(position==0){
       insertAtHead(head,tail,data);
       return;
    }
    // if positon greater than length  then we have to insert at end  of linked list then we call insertAtTail
    int length=findLength(head);
    if(position>=length){
        insertAtTail(head,tail,data);
        return ;
    }
    // 1 step to find position where we have to insert
    int i=1;
    Node*pre=head;
    while(i<position){
        pre=pre->next;
        i++;
    }
    // 2nd step to find current and previous
    Node*curr=pre->next;
    Node*newNode=new Node(data);
    newNode->next=curr;
    pre->next=newNode;

}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    print(head);
    cout<<endl;
    insertAtPosition(101,5,head,tail);
    cout<<"printing after inserting at position"<<endl;
    print(head); 
    cout<<endl;
    cout<<"head->"<<head->data<<endl;
    cout<<"tail ->"<<tail->data<<endl;     

    return 0;
}
