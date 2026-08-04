#include <iostream>
#include <string>
using namespace std;

class Node{
    public : 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};
class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val)
    {
        //new node bnane ke do tarike hain 
        Node* newNode = new Node(val);//dynamic
        if(head == NULL){
            head = tail = newNode;
            return ;
        }
        else{
            newNode-> next = head;
            head = newNode;
        }
        
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front(){
        // if first node is empty
        if(head == NULL)
        {
            cout<<"LL is empty\n";
            return;
        }
        // create another pointer named temmp both head and temp point to the same node 
        Node* temp = head;
        // move head to the 2nd node 
        head = head->next;
        // disconnect the 1st node from list head 
        temp->next = NULL;
        // delete the temp here 3 
        delete temp;
    }
    void printLL(){
        Node* temp = head;

        while(temp != NULL)
        {
            cout << temp->data <<"->";
            temp = temp->next;

        }
        cout<<"NULL"<<endl;
    }
};

int main() 
{
List ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);
ll.push_back(4);
ll.printLL();
ll.pop_front();
ll.printLL();
 return 0;
} 