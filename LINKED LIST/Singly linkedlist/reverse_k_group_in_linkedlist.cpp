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
int getLength(Node *&head)
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
Node *reversekgroup(Node *&head, int k)
{
    int len = getLength(head);
    if (head == NULL)
    {
        return NULL;
    }
    if (k > len)
    {
        return head;
    }
    Node *prev = NULL;
    Node *current = head;
    Node *right = current->next;
    int i = 0;
    while (i < k)
    {
        right = current->next;
        current->next = prev;
        prev = current;
        current = right;
        i++;
    }
    if (right != NULL)
    {
        head->next = reversekgroup(right, k);
    }
    return prev;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    print(head);
    cout << endl;
    print(reversekgroup(head, 3));
    cout << endl;

    return 0;
}
