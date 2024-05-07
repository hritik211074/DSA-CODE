
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
Node* sortzeroesonestwos(Node *&head)
{
    Node *zerohead = new Node(101);
    Node *zerotail= zerohead;

    Node *onehead = new Node(101);
    Node*onetail=onehead;

    Node*twohead=new Node(101);
    Node*twotail=twohead;
    // traverse the linkedlist
    Node*current=head ;
    while(current!=NULL){
        if(current->data==0){
            /// take zero wali node
         Node *temp=current;
         current=current->next;
         temp->next=NULL;
         // append the zero in zerodhead ll
          zerotail->next=temp;
          zerotail=temp;    
        }
        else if(current->data==1){
         Node *temp=current;
         current=current->next;
         temp->next=NULL;
         // append the one in onedhead ll
          onetail->next=temp;
          onetail=temp; 
        }
        else{
            Node *temp=current;
         current=current->next;
         temp->next=NULL;
         // append the two in twodhead ll
          twotail->next=temp;
          twotail=temp; 
        }
    }
    // remove dummy node
    //  modify one wali list
    Node*temp=onehead;
    onehead=onehead->next;
    temp->next=NULL;
    delete temp;
    // modify list two
    temp=twohead;
    twohead=twohead->next;
    temp->next=NULL;
    delete temp;
    // join list
    if(onehead->next!=NULL){
    zerotail->next=onehead;
    if(twohead!=NULL){
        onetail->next=twohead;
    }
    }else{
        // one wali is empty
        if(twohead!=NULL ){
            zerotail->next=twohead;
        }
    }
    temp=zerohead;
    zerohead=zerohead->next;
    temp->next=NULL;
    delete temp;
    return zerohead;
       
}
int main()
{
    Node *head = new Node(0);
    Node *second = new Node(1);
    Node *third = new Node(1);
    Node *fourth = new Node(2);
    Node *fifth = new Node(0);
    Node *sixth = new Node(1);
    Node *seventh = new Node(1);
    Node *eighth = new Node(0);
    Node *ninth = new Node(0);
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
    cout << endl;
    head=sortzeroesonestwos(head);
    print(head);

    return 0;
}
