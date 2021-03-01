//Ikjot Lab 8 Program Trees
//Single Node has height 0
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node* right;
        Node(int data,Node* left,Node* right){
            this->data = data;
            this->left = left;
            this->right = right;
        }
        Node* insert(Node *newNode,Node *head){
            Node *temp;
            temp =head;
            queue<Node*> q;
            q.push(temp);
            while(!q.empty()){
                Node *current = q.front();
                q.pop();
                if((*current).left==NULL){
                    (*current).left =newNode; 
                    return head;
                }
                else if((*current).right==NULL){
                    (*current).right = newNode;
                    return head;
                }
                else{
                    q.push((*current).left);
                    q.push((*current).right);
                }
            }
            return head;
        }
        void inorder(Node* head){
            if(head==NULL)
                return;
            inorder(head->left);
            cout<<head->data<<" ";
            inorder(head->right);
        }
        void postorder(Node* head){
            if(head==NULL)
                return;
            postorder(head->left);
            postorder(head->right);
            cout<<head->data<<" ";
        }
        void preorder(Node * head){
            if(head==NULL)
                return;
            cout<<head->data<<" ";    
            preorder(head->left);
            preorder(head->right);
        }
        int height(Node *head){
            if(head==NULL){return 0;}
            return max(height(head->left),height(head->right))+1;
        }
};
int main(){
    Node *root;
    root=NULL;
    cout << "Welcome to the C++ Binary Tree Program - Lab - 8(Listed Below are the available operations you can perform)" << endl;
    cout << "Press 1 to insert into the Binary Tree" << endl;
    cout << "Press 2 to get the height of the root of the binary tree" << endl;
    cout << "Press 3 to get the inorder traversal of the tree" << endl;
    cout << "Press 4 to get the postorder traversal of the tree" << endl;
    cout << "Press 5 to get the preorder traversal of the tree" << endl;
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
            cout<<"Kindly enter the data of the node to insert into the tree : ";
            int data;
            cin>>data;
            if(root==NULL){
                root = new Node(data,NULL,NULL);
                continue;
            }
            else{
                Node *newNode = new Node(data,NULL,NULL);
                root = root->insert(newNode,root);
            }
        }
        else if (type == 2)
        {
            cout << "Here is the height of the binary tree : " << root->height(root) - 1<<endl; 
        }
        else if (type == 3)
        {
            cout << "Here is the inorder traversal of the tree : ";
            root->inorder(root);
            cout<<endl;
        }
        else if (type == 4)
        {
            cout << "Here is the postorder traversal of the tree : ";
            root->postorder(root);
            cout<<endl;
        }
        else if (type == 5)
        {
            cout << "Here is the preorder traversal of the tree : ";
            root->preorder(root);
            cout<<endl;
        }
        else{
            cout<<"Kindly enter a valid choice."<<endl;
        }
    }
}