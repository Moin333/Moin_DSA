// Singly Linked List
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        tail = tail->next;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // Insertion at start
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // Insertion at end and updation of tail pointer
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    // Deletion of first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        // free memory
        delete temp;

        // Update tail if head becomes NULL
        if (head == NULL)
            tail = NULL;
    }
    else
    {
        // Deletion of any node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (curr != NULL && cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr == NULL)
        {
            cout << "Invalid position. Node not found." << endl;
            return;
        }

        

        // Update tail if the last node is deleted
        if (curr->next == NULL)
            tail = prev;
        prev->next = curr->next;
        curr->next = NULL;
        // free memory
        delete curr;
    }
}


void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // new node create
    // cout << node1->data << endl;
    // cout << node1->next;

    Node *head = NULL;
    Node *tail = NULL;
    // print(head);
    //  Adding node
    insertAtHead(head, tail, 333);
    print(head);
    insertAtTail(head, tail, 902);
    print(head);
    insertAtPosition(head, tail, 3, 708);
    print(head);
    insertAtPosition(head, tail, 4, 1005);
    print(head);
    cout << "Head ->" << head->data << endl;
    cout << "Tail ->" << tail->data << endl;
    deleteNode(4, head, tail);
    print(head);
    cout << "Tail ->" << tail->data << endl;
    return 0;
}
