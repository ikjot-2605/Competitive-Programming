#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool verticalOrderTraversal(TreeNode* A, TreeNode* B)
{   
    queue<pair<TreeNode*,TreeNode*>> q;
    if(A==NULL&&B==NULL)return 1;
    if(A!=NULL&&B==NULL)return 0;
    if(A==NULL&&B!=NULL)return 0;
    q.push({A,B});
    while(!q.empty()){
        TreeNode *first = q.front().first,*second = q.front().second;
        q.pop();
        if(first->val!=second->val)return false;
        if(first->left&&second->left){
            q.push({first->left,second->left});
        }
        else if(!first->left&&!second->left){

        }
        else{
            return false;
        }
        if(first->right&&second->right){
            q.push({first->right,second->right});
        }
        else if(!first->right&&!second->right){

        }
        else{
            return false;
        }
    }
    return true;
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
    cout<<verticalOrderTraversal(root,root);
}