#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void inOrderTraversal(Node *node)
{
    if ((node) == NULL)
        return;
    inOrderTraversal((*node).left);
    cout << (*node).data << " ";
    inOrderTraversal((*node).right);
}
void postOrderTraversal(Node *node)
{
    if ((node) == NULL)
        return;
    postOrderTraversal((*node).left);
    postOrderTraversal((*node).right);
    cout << (*node).data << " ";
}
void preOrderTraversal(Node *node)
{
    if ((node) == NULL)
        return;
    cout << (*node).data << " ";    
    preOrderTraversal((*node).left);
    preOrderTraversal((*node).right);
}
int main()
{
    Node head = Node(1);
    Node left = Node(2);
    Node right = Node(3);
    head.left = &left;
    head.right = &right;
    preOrderTraversal(&head);
    return 0;
}