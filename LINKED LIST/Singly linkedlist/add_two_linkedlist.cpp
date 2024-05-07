
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
Node *reverse(Node *temp)
{
    Node *prev = NULL;
    Node *current = temp;
    Node *right = current->next;
    while (current != NULL)
    {
        right = current->next;
        current->next = prev;
        prev = current;
        current = right;
    }
    return prev;
}
Node *sum(Node *&head1, Node *&head2)
{
    head1 = reverse(head1);
    head2 = reverse(head2);
    // perform adding
    Node *anshead = NULL;
    Node *anstail = NULL;
    int carry = 0;
    while (head1 != NULL && head2 != NULL)
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        // attach newnode to ans wali linkedlist
        if (anshead == NULL)
        {
            anshead = newnode;
            anstail = newnode;
        }
        else
        {
            anstail->next = newnode;
            anstail = newnode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        anstail->next = newnode;
        anstail = newnode;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        int sum = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        anstail->next = newnode;
        anstail = newnode;
        head2 = head2->next;
    }
    if(carry!=0)
    {
        Node *newnode = new Node(carry);
        anstail->next = newnode;
        anstail = newnode;
    }
    anshead = reverse(anshead);
    return anshead;
}

int main()
{
    Node *head1 = new Node(2);
    Node *second1 = new Node(5);
    Node *third1 = new Node(8);
    head1->next=second1;
    second1->next=third1;

    Node *head2 = new Node(1);
    Node *second2 = new Node(2);
    Node *third2 = new Node(9);
    head2->next=second2;
    second2->next=third2;
    Node *ans = sum(head1, head2);
    print(ans);

    return 0;
}
