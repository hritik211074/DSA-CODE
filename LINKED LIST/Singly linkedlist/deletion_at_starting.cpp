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
    
    if(position==1){
        Node * ptr = head;
        head=head->next;
        ptr=NULL;
        delete ptr;
        return ;

    }
       
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
