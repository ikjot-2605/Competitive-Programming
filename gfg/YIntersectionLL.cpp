// { Driver Code Starts
#include<iostream>
#include<stdio.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int len1=0;
    int len2=0;
    while(temp1!=NULL||temp2!=NULL){
        if(temp1!=NULL){
            temp1=temp1->next;
            len1++;
        }
        if(temp2!=NULL){
            temp2=temp2->next;
            len2++;
        }
    }
    temp1 = head1;
    temp2 = head2;
    int diff = abs(len1-len2);
    if(len1>len2&&diff>0){
        while(diff>0){
        temp1 = temp1->next;
        diff--;
        }
    }
    else if(len1<len2&&diff>0){
        while(diff>0){
        temp2 = temp2->next;
        diff--;
        }
    }
    Node *temp1r = temp1;
    Node *temp2r = temp2;
    while(temp1r!=temp2r&&temp1r!=NULL&&temp2r!=NULL){
        temp1r = temp1r->next;
        temp2r = temp2r->next;
    }
    if(temp1r!=NULL&&temp2r!=NULL)return temp1r->data;
    else{
        return -1;
    }
}

