
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
void printnth(Node*head,int &positionfromtail,int &result){
    if(head==NULL){
        return ;
    }
    printnth(head->next,positionfromtail,result);
    if(positionfromtail==0){
        result=head->data;
    }
    positionfromtail--;
}



int main()
{
    Node *head = new Node(2);
    Node *second = new Node(5);
    Node *third = new Node(8);
     Node *fourth = new Node(1);
    Node *fifth = new Node(2);
    Node *sixth = new Node(9);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    int result=-1;
    int positionfromtail=3;
    printnth(head,positionfromtail,result);
    cout<<"nth node from last of a linked list "<<endl;
    cout<<result;

    return 0;
}
