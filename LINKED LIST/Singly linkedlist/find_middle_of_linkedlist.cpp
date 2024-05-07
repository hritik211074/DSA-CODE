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
// this is for even number of nodes where it find second middle nodes
Node *middle_Sec_node(Node *head)
{
    if (head == NULL)
    {
        cout << "we cannot find middle element" << endl;
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {

        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
//
Node *middle_First_node(Node *head)
{
    if (head == NULL)
    {
        cout << "we cannot find middle element" << endl;
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast!=NULL && fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow;
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
    cout << middle_First_node(head)->data << endl;
    cout << middle_Sec_node(head)->data << endl;

    return 0;
}
