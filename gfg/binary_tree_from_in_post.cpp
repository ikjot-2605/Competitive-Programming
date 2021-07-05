// { Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int A[], int B[], int n) {
    // Your code here
    if(n==0){
        return NULL;
    }
    Node* root = new Node(B[n-1]);
    if(n==1){
        
    }
    else{
        int indexOfRoot = -1;
        for(int i = 0;i<n;i++){
            if(A[i]==root->data){
                indexOfRoot = i;
                break;
            }
        }   
        int newA[indexOfRoot];
        int newB[indexOfRoot];
        for(int i =0 ;i<indexOfRoot;i++){
            newA[i] = (A[i]);
        }
        for(int i =0 ;i<indexOfRoot;i++){
            newB[i]=(B[i]);
        }
        root->left = buildTree(newA,newB,indexOfRoot);
        //return NULL;
        int newAA[n-indexOfRoot-1];
        int newBB[n-indexOfRoot-1];
        for(int i =indexOfRoot+1 ;i<n;i++){
            newAA[i-indexOfRoot-1] = (A[i]);
        }
        for(int i =indexOfRoot ;i<n-1;i++){
            newBB[i-indexOfRoot] =(B[i]);
        }
        root->right = buildTree(newAA,newBB,n-indexOfRoot-1);
    }
    return root;
}
