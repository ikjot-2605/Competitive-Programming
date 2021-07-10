// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    int lengthLL(Node* head){
        if(!head){return 0;}
        return 1+lengthLL(head->next);
    }
    Node* rotate(Node* head, int k)
    {
        int length =  lengthLL(head);
        k = k%length;
        if(!k)return head;
        Node* newHead = head;
        Node* prevHead = head;
        for(int i =0 ;i<k;i++){
            prevHead = newHead;
            newHead = newHead->next;
        }
        prevHead->next = NULL;
        Node* lastNode = newHead;
        while(lastNode->next){
            lastNode = lastNode->next;
        }
        lastNode->next = head;
        return newHead;

    }
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends