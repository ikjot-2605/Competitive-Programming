//Ikjot's Lab 10 program - BST Delete Node
#include <bits/stdc++.h>
using namespace std;
class BST_Node
{
public:
    char data;
    BST_Node *left;
    BST_Node *right;
    BST_Node(char data, BST_Node *left, BST_Node *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
    pair<BST_Node *, BST_Node *> search(char value_to_search, BST_Node *root)
    {
        queue<BST_Node *> q;
        q.push(root);
        while (!q.empty())
        {
            BST_Node *possible_parent = q.front();
            q.pop();
            if (possible_parent->data == value_to_search)
            {
                return {possible_parent, NULL};
            }
            else if (possible_parent->left != NULL && possible_parent->left->data == value_to_search)
            {
                return {possible_parent->left, possible_parent};
            }
            else if (possible_parent->right != NULL && possible_parent->right->data == value_to_search)
            {
                return {possible_parent->right, possible_parent};
            }
            else
            {
                if (possible_parent->left != NULL)
                {
                    q.push(possible_parent->left);
                }
                if (possible_parent->right != NULL)
                {
                    q.push(possible_parent->right);
                }
            }
        }
        return {NULL, NULL};
    }
    void inorder_using_stack(BST_Node *root)
    {
        stack<BST_Node *> s;
        BST_Node *temp = root;
        while (temp != NULL || s.empty() == false)
        {
            while (temp != NULL)
            {
                s.push(temp);
                temp = temp->left;
            }
            temp = s.top();
            s.pop();

            cout << temp->data << " ";

            temp = temp->right;
        }
        cout<<endl;
    }
};
BST_Node* insert(char new_node_value, BST_Node *root)
{
    // if (root->left == NULL && root->right == NULL)
    // {
    //     if (new_node_value < root->data)
    //     {
    //         root->left = new BST_Node(new_node_value, NULL, NULL);
    //     }
    //     else if (new_node_value > root->data)
    //     {
    //         root->right = new BST_Node(new_node_value, NULL, NULL);
    //     }
    //     else
    //     {
    //         cout<<"The element already exists in the BST."<<endl;
    //         return;
    //     }
    // }
    // else
    // {
    //     if (root->data > new_node_value)
    //     {
    //         insert(new_node_value, root->left);
    //     }
    //     else if (root->data < new_node_value)
    //     {
    //         insert(new_node_value, root->right);
    //     }
    //     else
    //     {
    //         cout<<"The element already exists in the BST."<<endl;
    //         return;
    //     }
    // }
    if(root==NULL){
        return new BST_Node(new_node_value,NULL,NULL);
    }
    if (new_node_value > root->data)
    {
        root->right = insert(new_node_value, root->right);
    }
    else if (new_node_value < root->data)
    {
        root->left = insert(new_node_value, root->left);
    }
    else
    {
        cout << "The node you are trying to insert already exists." << endl;
    }
    return root;
}
//to find the minimum valued node in subtree rooted at 'root'
BST_Node* minimum_successor(BST_Node* root){
    BST_Node* temp = root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
//to delete a particular node recursively
BST_Node* deleteNode(char node_to_delete,BST_Node *root){
    if (root == NULL){
        cout<<"NODE NOT FOUND"<<endl;
        return root;
    }
    if(node_to_delete<root->data){
        root->left = deleteNode(node_to_delete,root->left);
    }
    else if(node_to_delete>root->data){
        root->right = deleteNode(node_to_delete,root->right);
    }
    else{
        if (root->left == NULL) {
            BST_Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            BST_Node* temp = root->left;
            free(root);
            return temp;
        }
        BST_Node* temp = minimum_successor(root->right);
        root->data = temp->data;
        root->right = deleteNode(temp->data,root->right);    
    }
    return root;
}

int main()
{
    BST_Node *root;
    root = NULL;
    cout << "Welcome to the C++ Binary Search Tree(Deletion) Program - Lab - 10(Listed Below are the available operations you can perform)" << endl;
    cout << "Press 1 to insert into the Binary Search Tree" << endl;
    cout << "Press 2 to search for a particular node in the BST" << endl;
    cout << "Press 3 to get the inorder traversal of the BST - Using A Stack" << endl;
    cout << "Press 4 to delete node from BST" << endl;
    cout << "Press 0 to exit the program." << endl
         << endl;

    while (true)
    {
        cout << "Enter your operation type : ";
        int type;
        cin >> type;
        cin.ignore(1, '\n');
        if (type == 0)
        {
            cout << "Thank you. Exiting." << endl
                 << endl;
            break;
        }
        if (type == 1)
        {
            cout << "Kindly enter the data of the node to insert into the tree : ";
            char data;
            cin >> data;
            cin.ignore(1, '\n');
            if (root == NULL)
            {
                root = new BST_Node(data, NULL, NULL);
            }
            else
            {
                root = insert(data, root);
            }
        }
        else if (type == 2)
        {
            char node;
            cout << "Enter the node to search : ";
            cin >> node;
            cin.ignore(1, '\n');
            pair<BST_Node *, BST_Node *> result;
            result = root->search(node, root);
            if (result.first == NULL)
            {
                cout << "No node with data " << node << " was found.\n";
            }
            else if (result.second == NULL)
            {
                cout << "The given node is the root and it's value is " << result.first->data << endl;
                cout<<"Address of the root is : "<<result.first<<endl;
            }
            else
            {
                cout << "The given node " << result.first->data << " was found"
                     << " and it's parent is the node with value " << result.second->data << endl;
                cout<<"Address of the found node is : "<<result.first<<" and the address of the parent is :"<<result.second<<endl;     
            }
        }
        else if (type == 3)
        {
            cout << "Here is the inorder traversal of the tree - using a stack : ";
            root->inorder_using_stack(root);
        }
        else if(type==4){
            cout<<"Enter the node you want to delete : ";
            char node_to_delete;
            cin>>node_to_delete;
            cin.ignore(1, '\n');
            root = deleteNode(node_to_delete,root);
        }
        else
        {
            cout << "Kindly enter a valid choice." << endl;
        }
    }
}