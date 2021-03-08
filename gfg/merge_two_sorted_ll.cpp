// { Driver Code Starts
#include<iostream>
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

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node* first_list = head_A;
    Node* second_list = head_B;
    Node * newList;
    Node* fakeHead=newList;
    while(first_list!=NULL&&second_list!=NULL){
        if(first_list!=NULL&&second_list!=NULL){
            if(first_list->data>second_list->data){
                newList->next = first_list;
                newList = newList->next; 
                first_list = first_list->next;
            }  
            else{
                newList->next = second_list;
                newList = newList->next; 
                second_list = second_list->next;
            }
        }
        else if(first_list!=NULL){
            while(first_list!=NULL){
                newList->next = first_list;
                newList = newList->next; 
                first_list = first_list->next;
            }
        }
        else{
            while(second_list!=NULL){
                newList->next = second_list;
                newList = newList->next; 
                second_list = second_list->next;
            }
        }
    }
    fakeHead = fakeHead->next;
    return fakeHead;
}  