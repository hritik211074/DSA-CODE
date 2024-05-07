
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
void sortzeroesonestwos(Node *&head)
{
    int zero = 0;
    int one = 0;
    int two = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zero++;
            temp = temp->next;
        }
        else if (temp->data == 1)
        {
            one++;
            temp = temp->next;
        }
        else
        {
            two++;
            temp = temp->next;
        }
    }
    temp = head;
    while (zero != 0)
    {
        temp->data = 0;
        temp = temp->next;
        zero--;
    }
    while (one != 0)
    {
        temp->data = 1;
        temp = temp->next;
        one--;
    }
    while (two != 0)
    {
        temp->data = 2;
        temp = temp->next;
        two--;
    }
}
int main()
{
    Node *head = new Node(2);
    Node *second = new Node(1);
    Node *third = new Node(0);
    Node *fourth = new Node(2);
    Node *fifth = new Node(0);
    Node *sixth = new Node(2);
    Node *seventh = new Node(0);
    Node *eighth = new Node(1);
    Node *ninth = new Node(2);
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
    sortzeroesonestwos(head);
    print(head);

    return 0;
}
