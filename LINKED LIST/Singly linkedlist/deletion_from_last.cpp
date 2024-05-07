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
    ~Node(){
        cout<< "deleted->"<<this->data<<"value"<<endl;
    }
};
int findlength(Node *&head)
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
void deletion(int position , Node *&head ,Node*& tail){
    if(head==NULL){
        cout<<"node cannnot be deleted"<<endl;
    }
    // deleting first Node
    if(position ==1){
        
        Node * ptr = head;
        head=head->next;
        ptr=NULL;
        delete ptr;
    }
    // deleting  last node 
    int len=findlength(head);
    if(position==len){
    // find previous
    int i=1;
    Node *pre=head;
    while(i<position-1){
       pre=pre->next;
       i++; 
    }
    pre->next=NULL;
    Node *temp=tail;
    tail=pre;
    delete temp;
    }
    // deleting from middle of linked list
    int i=1;
    Node *pre=head;
    while(i<position-1){
        pre=pre->next;
        i++;
    }
    Node *current=pre->next;

    pre->next=current->next;
    current->next=NULL;
    delete current; 



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

int main()
{
    Node *head = NULL;
    Node *tail=NULL;
    insertAtTail(head,tail, 20);
    insertAtTail(head,tail, 30);
    insertAtTail(head,tail, 40);
    insertAtTail(head,tail, 50);
    insertAtTail(head,tail, 60);
    print(head);
    cout<<endl;
    deletion(1,head,tail);
    print(head);

    return 0;
}
