
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
    Node* prev = NULL;
    Node* current = temp;
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

bool checkPalindrome(Node *&head)
{
    if (head == NULL && head->next == NULL)
    {
        return true;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    Node *HeadfromMiddle = reverse(slow->next);
    slow->next = HeadfromMiddle;
    Node *temp1 = head;
    Node *temp2 = HeadfromMiddle;
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(40);
    Node *seventh = new Node(30);
    Node *eighth = new Node(20);
    Node *ninth = new Node(10);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = NULL;
    bool ans = checkPalindrome(head);
    if (ans)
    {
        cout << "given linkedlist is palindromic" << endl;
    }
    else
    {
        cout << "given linkedlist is not palindromic" << endl;
    }
    return 0;
}
