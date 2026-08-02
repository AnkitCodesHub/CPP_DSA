#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // this stores data hello
    Node(int data)
    {
        // data = 10
        // next = NULL
        this->data = data;
        this->next = NULL;
    }
};
// changes the value at head &Node means reference 
// adding new node before 10 
void InsertNodeatHead(Node *&head, int val)
{
    // new node created 
    Node *temp = new Node(val);
    // new node point to the current first node 
    temp->next = head;
    // moves the head pointer to the new node
    head = temp;
}
void InsertNodeatTail(Node *&head, int val)
{   //new node created 
    Node *temp = new Node(val);
    // Node *curr = head;

    if(head == NULL)
    {
        head=temp;
        return;
    }
    Node * curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}
void printlinkedlist(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    InsertNodeatHead(head, 20);
    InsertNodeatTail(head, 30);
    printlinkedlist(head);
}