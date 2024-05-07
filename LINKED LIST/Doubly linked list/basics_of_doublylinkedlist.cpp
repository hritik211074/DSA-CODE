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
int getlength(Node *head)
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    cout<<"travesing the linked list"<<endl;

    print(first);
    cout<<"length of doubly linked list is :"<<getlength(first);
    print(first);
    return 0;
}