#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
};
//in this program I have defined head to be the last element of the list, so that insertion at end or beginning is efficient, without need of a for loop
Node *insertAtBeginning(struct Node *head, struct Node *newHead)
{
    struct Node *temp = head->next;
    head->next = newHead;
    newHead->next = temp;
    return head;
}

Node *search(struct Node *head, int key)
{
    struct Node *originalHead = head;
    if(head==NULL){
        return NULL;
    }
    if (originalHead->data == key)
    {
        return originalHead;
    }
    head = head->next;
    while (head != originalHead)
    {
        if (head->data == key)
        {
            return head;
        }
        head = head->next;
    }
    return NULL;
}

void printList(Node *head)
{
    struct Node *temp = head->next;
    while (temp != head && temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << head->data << endl;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    while (true)
    {
        cout << "Please select your choice of task. Press 4 for list of options." << endl;
        int type;
        cin >> type;
        if (type == 0)
        {
            //exit
            cout << "Thank you. Exiting." << endl;
            break;
        }
        else if (type == 1)
        {
            cout << "Please input your choice to insert at beginning of list." << endl;
            char c;
            cin >> c;
            if (head == NULL)
            {
                head->data = c;
                head->next = head;
            }
            else
            {
                struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
                newNode->data = c;
                newNode->next = NULL;
                head = insertAtBeginning(head, newNode);
            }
        }
        else if (type == 2)
        {
            //search in list
            cout << "Kindly input the key you want to search." << endl;
            char key;
            cin >> key;
            struct Node *searchResult = search(head, key);
            if (searchResult == NULL)
            {
                cout << "Not Found." << endl;
            }
            else
            {
                cout << "Found." << endl;
            }
        }
        else if (type == 3)
        {
            //printList
            cout << "Here is the list." << endl;
            printList(head);
        }
        else if (type == 4)
        {
            cout << "Press 0 to exit." << endl;
            cout << "Press 1 to insert element at the beginning of list." << endl;
            cout << "Press 2 to search for a particular element in list." << endl;
            cout << "Press 3 to display list." << endl;
        }
    }
}
