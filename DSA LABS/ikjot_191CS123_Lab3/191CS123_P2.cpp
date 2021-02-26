#include <bits/stdc++.h>
using namespace std;
//the structure for the linked list
struct Node
{
    char data;
    struct Node *next;
};


Node *insertAtBeginning(struct Node *head, struct Node *newHead)
{
    newHead->next = head;
    head = newHead;
    return head;
}

Node *search(struct Node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
        {
            return head;
        }
        head = head->next;
    }
    return NULL;
}

void printList(struct Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAfterLoc(struct Node *loc, struct Node *nloc)
{
    struct Node *nextToCurrLoc = loc->next;
    loc->next = nloc;
    nloc->next = nextToCurrLoc;
}



bool deleteFirstOccurence(Node **head, int key)
{
    struct Node *temp = *head;
    if ((*head)->data == key)
    {
        (*head)=((*head)->next);
        return true;
    }
    else
    {
        while (true && temp->next != NULL)
        {
            if (temp->next->data == key)
            {
                temp->next = temp->next->next;
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
}

struct Node *deleteAllOccurences(Node **head, int key)
{

    while(deleteFirstOccurence(head,key)){
        continue;
    }
    return *head;
}

struct Node *insert(struct Node *head, char toInsert, char loc)
{
    struct Node *location = search(head, loc);
    struct Node *toInsertNode = (struct Node *)malloc(sizeof(struct Node));
    toInsertNode->data = toInsert;
    toInsertNode->next = NULL;

    if (location != NULL)
    {
        insertAfterLoc(location, toInsertNode);
        return head;
    }
    else
    {
        struct Node *newHead = insertAtBeginning(head, toInsertNode);
        return newHead;
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    while (true)
    {
        cout << "Please select your choice of task. Press 8 to view all options." << endl;
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
            if (head->data == NULL)
            {
                head->data = c;
                head->next = NULL;
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
            cout << "Enter the key after which you want to insert the new node." << endl;
            char key;
            cin >> key;
            struct Node *loc = search(head, key);
            if(loc==NULL){
                cout<<"!!! The entered key wasn't found in the list. !!!"<<endl;
                continue;
            }
            cout << "Enter the key to insert after " << key << endl;
            char nkey;
            cin >> nkey;
            struct Node *nloc = (struct Node *)malloc(sizeof(struct Node));
            nloc->data = nkey;
            nloc->next = NULL;
            insertAfterLoc(loc, nloc);
        }
        else if (type == 5)
        {
            //insert
            cout << "Kindly enter the key to insert after." << endl;
            char key;
            cin >> key;
            struct Node *found = search(head,key);
            if(found==NULL){
                cout<<"!!! The entered key wasn't found in the list. !!!"<<endl;
                cout<<"Enter the key to insert at beginning of list!"<<endl;
            }
            else 
                cout << "Kindly enter the key to insert into list after " << key << endl;
            char toInsert;
            cin >> toInsert;
            head = insert(head,toInsert,key);
        }
        else if (type == 6)
        {
            //delete first occurence
            cout << "Kindly input the key to delete." << endl;
            char key;
            cin >> key;
            bool success = deleteFirstOccurence(&head, key);
        }
        else if (type == 7)
        {
            //delete all occurences
            cout << "Kindly input the key to delete throughout the list." << endl;
            char key;
            cin >> key;
            head = deleteAllOccurences(&head, key);
        }
        else if(type == 8){
            cout<<"Press 0 to exit."<<endl;
            cout<<"Press 1 to insert element at the beginning of list."<<endl;
            cout<<"Press 2 to search for a particular element in list."<<endl;
            cout<<"Press 3 to display list."<<endl;
            cout<<"Press 4 to insert after a particular element in list."<<endl;
            cout<<"Press 5 to insert after a particular element in list, if found. Otherwise, insert at start of list."<<endl;
            cout<<"Press 6 to delete first occurence of a particular element in list."<<endl;
            cout<<"Press 7 to delete all occurences of a particular element in list."<<endl;
        }
    }
}