#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

TreeNode* verticalOrderTraversal(TreeNode* A, TreeNode* B)
{   
    if(A==NULL&&B==NULL)return NULL;
    if(A==NULL)return B;
    if(B==NULL)return A;
    if(A&&B){
        A->val+=B->val;
        A->left = verticalOrderTraversal(A->left,B->left);
        A->right = verticalOrderTraversal(A->right,B->right);
    }
    return A;
}
TreeNode *newNode(int val)
{
    TreeNode *new_node = new TreeNode;
    new_node->val = val;
    new_node->left = new_node->right = NULL;
    return new_node;
}
void inorder(TreeNode * node)
{
    if (!node)
        return;
 
    /* first recur on left child */
    inorder(node->left);
 
    /* then print the val of node */
    printf("%d ", node->val);
 
    /* now recur on right child */
    inorder(node->right);
}
int main()
{
    TreeNode *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5);
    root1->right->right = newNode(6);
 
    /* Let us construct the second Binary Tree
           4
         /   \
        1     7
       /     /  \
      3     2    6   */
    TreeNode *root2 = newNode(4);
    root2->left = newNode(1);
    root2->right = newNode(7);
    root2->left->left = newNode(3);
    root2->right->left = newNode(2);
    root2->right->right = newNode(6);
    inorder(verticalOrderTraversal(root1,root2));
}