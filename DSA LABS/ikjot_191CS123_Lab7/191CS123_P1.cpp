//IKJOT LAB 7 PROGRAM
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char data;
    int priority;
    class Node *next;
    bool initialized;
    Node(char data, int priority, Node *next)
    {
        this->data = data;
        this->priority = priority;
        this->next = next;
        this->initialized = false;
    }
};

Node *new_node(char data, int priority)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;
    return temp;
}

char dequeue(Node **head)
{
    Node *temp = *head;
    char data = temp->data;
    (*head) = (*head)->next;
    free(temp);
    return data;
}

void enqueue(Node **head, char data, int priority)
{
    Node *start = (*head);
    Node *temp = new_node(data, priority);
    if ((*head)->initialized == false)
    {
        *head = temp;
        (*head)->initialized = true;
        return;
    }
    temp->initialized = true;
    if ((*head)->priority < priority)
    {
        temp->next = *head;
        (*head) = temp;
    }
    else
    {
        while (start->next != NULL && start->next->priority >= priority)
            start = start->next;
        temp->next = start->next;
        start->next = temp;
    }
}

bool isEmpty(Node **head) { return (*head)->data == 0; }

void print_queue(Node **head)
{
    if (isEmpty(head))
        cout << "The queue is empty." << endl;
    else
    {
        Node *temp = (*head);
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

// Driver code
int main()
{
    Node *head = new Node('~', 0, NULL);
    cout << "Welcome to the C++ Priority Queue Program - Lab - 7(Listed Below are the available operations you can perform)" << endl;
    cout << "Press 1 to print the PQ" << endl;
    cout << "Press 2 to enqueue an element to queue" << endl;
    cout << "Press 3 to dequeue an element from queue " << endl;
    cout << "Press 0 to exit the program." << endl
         << endl;

    while (true)
    {
        cout << "Enter your operation type : ";
        int type;
        cin >> type;
        if (type == 0)
        {
            cout << "Thank you. Exiting." << endl
                 << endl;
            break;
        }
        if (type == 1)
        {
            print_queue(&head);
        }
        else if (type == 2)
        {
            cout << "Enter the data to insert into PQ : ";
            char data;
            cin >> data;
            cout << "Enter the priority of the data : ";
            int priority;
            cin >> priority;
            enqueue(&head, data, priority);
        }
        else if (type == 3)
        {
            cout << "The dequeued element is " << dequeue(&head) << endl;
        }
    }

    return 0;
}