#include <bits/stdc++.h>
using namespace std;
//the structure for the linked list
struct Node { 
    char data; 
    struct Node* next; 
};

Node* insertAtBeginning(struct Node *head,struct Node* newHead){
    newHead->next=head;
    head=newHead;
    return head;
}

Node* search(struct Node* head, int key){
    while(head!=NULL){
        if(head->data==key){
            return head;
        }
        head=head->next;
    }
    return NULL;
}

void printList(struct Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    while(true){
        cout<<"Please select your choice of task. Press 4 for list of options."<<endl;
        int type;
        cin>>type;
        if(type==0){
            //exit
            cout<<"Thank you. Exiting."<<endl;
            break;
        }
        else if(type==1){
            cout<<"Please input your choice to insert at beginning of list."<<endl;
            char c;
            cin>>c;
            if(head->data==NULL){
                head->data = c;
                head->next=NULL;
            }
            else{
                struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
                newNode->data=c;
                newNode->next=NULL;
                head = insertAtBeginning(head,newNode);
            }
        }
        else if(type==2){
            //search in list
            cout<<"Kindly input the key you want to search."<<endl;
            char key;
            cin>>key;
            struct Node* searchResult = search(head,key);
            if(searchResult==NULL){
                cout<<"Not Found."<<endl;
            }
            else{
                cout<<"Found."<<endl;
            }
        }
        else if(type==3){
            //printList
            cout<<"Here is the list."<<endl;
            printList(head);
        }
        else if(type == 4){
            cout<<"Press 0 to exit."<<endl;
            cout<<"Press 1 to insert element at the beginning of list."<<endl;
            cout<<"Press 2 to search for a particular element in list."<<endl;
            cout<<"Press 3 to display list."<<endl;
        }
    }
}