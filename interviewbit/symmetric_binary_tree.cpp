#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool isMirror(TreeNode *A, TreeNode *B){
    if(A==NULL&&B==NULL)return true;
    if(A&&B&&A->val==B->val)return isMirror(A->left,B->right)&&isMirror(A->right,B->left);
    return false;
}
bool symmetric(TreeNode *A)
{
    if(isMirror(A,A))return true;
    return false;
}

int main()
{
    TreeNode *root = new TreeNode(7);
    TreeNode *a1 = new TreeNode(5090);
    TreeNode *a2 = new TreeNode(9569);
    TreeNode *a3 = new TreeNode(3628);
    root->left = a1;
    root->right = a2;
    root->left->right = a3;
    cout<< symmetric(root);
    
}