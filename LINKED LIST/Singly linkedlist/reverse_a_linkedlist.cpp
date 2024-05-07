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
// inserting at starting of linkedlist
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
Node *reverse(Node *&prev, Node *&curr)
{
    // base condition
    if (curr == NULL)
    {
        return prev;
    }
    // recursion sambhal lega
    Node *forward = curr->next;
    curr->next = prev;
    reverse(curr, forward);
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    print(head);
    cout << endl;
    Node *prev = NULL;
    Node *curr = head;
    head = reverse(prev, curr);
    print(head);

    return 0;
}
