#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    struct node* next;
};

void InsertAtBeginning(struct node **head_ref, char new_data) {
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = new_data;
    temp->next = *head_ref; *head_ref = temp;
}

struct node *Search(struct node *head, char key) {
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data == key) return temp;
        temp = temp->next;
    } return NULL;
}

void InsertAfterLOC(struct node *loc, char new_data) {
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = new_data; temp->next = loc->next;
    loc->next = temp;
}

void Insert(struct node **head_ref, char item, char key) {
    struct node *loc = Search(*head_ref, key);
    if (loc == NULL) InsertAtBeginning(head_ref, item);
    else InsertAfterLOC(loc, item);
}

bool DeleteFirstOccurrence(struct node **head_ref, char key) {
    struct node *loc = Search(*head_ref, key), *temp = *head_ref;
    if (loc == *head_ref) { *head_ref = (*head_ref)->next; return true; }
    if (loc == NULL) return false;
    while (temp->next != loc) temp = temp->next;
    temp->next = temp->next->next;
    return true;
}

void DeleteAllOccurrence(struct node **head_ref, char key) {
    while(DeleteFirstOccurrence(head_ref, key));
}

void PrintList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

int main() {
    struct node *head = (struct node *) malloc(sizeof(struct node));
    cout << "Enter 0 to exit." << endl;
    cout << "Enter 1 to print the list from the beginning." << endl;
    cout << "Enter 2 to insert node at the beginning." << endl;
    cout << "Enter 3 to search for a key." << endl;
    cout << "Enter 4 to insert new node after a key." << endl;
    cout << "Enter 5 to delete first occurrence of a key." << endl;
    cout << "Enter 6 to delete all occurrences of a key." << endl;

    while(true) {
        cout << endl;
        cout << "Enter your choice here : "; int choice; cin >> choice;
        if (choice == 0) { cout << "Exited!!" << endl << endl; break; }

        char new_data, key;
        switch (choice) {
            case 1 : PrintList(head); break;
            case 2 :
                cout << "Enter the new data : ";
                cin >> new_data;
                InsertAtBeginning(&head, new_data);
                cout << "List updated!" << endl;
                break;
            case 3 :
                cout << "Enter the key to look for : ";
                char key; cin >> key;
                struct node *res; res = Search(head, key);
                cout << ((res == NULL) ? "The key is not present in the list." : "The key was found in the list.") << endl;
                break;
            case 4 :
                cout << "Enter the new data to be inserted : ";
                cin >> new_data;
                cout << "Enter the key to look for : ";
                cin >> key; Insert(&head, new_data, key);
                cout << "List updated!" << endl;
                break;
            case 5 :
                cout << "Enter the key to be deleted : ";
                cin >> key; bool status; status = DeleteFirstOccurrence(&head, key);
                cout << ((status) ? "Key deleted!" : "Key not found!") << endl;
                break;
            case 6 :
                cout << "Enter the key to be deleted : ";
                cin >> key; DeleteAllOccurrence(&head, key);
                cout << "List updated!" << endl;
                break;
            default : cout << "Invalid choice. Please try again." << endl; break;
        }
    }
}
