#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
 TreeNode* lcaU(TreeNode* root, int n1, int n2){
     // Base case
    if (root == NULL) return NULL;
 
    // If either n1 or n2 matches with root's val, report
    // the presence by returning root (Note that if a val is
    // ancestor of other, then the ancestor val becomes LCA
    if (root->val == n1 || root->val == n2)
        return root;
 
    // Look for vals in left and right subtrees
    TreeNode *left_lca  = lcaU(root->left, n1, n2);
    TreeNode *right_lca = lcaU(root->right, n1, n2);
 
    // If both of the above calls return Non-NULL, then one val
    // is present in once subtree and other is present in other,
    // So this node is the LCA
    if (left_lca && right_lca)  return root;
 
    // Otherwise check if left subtree or right subtree is LCA
    return (left_lca != NULL)? left_lca: right_lca;
 }
int lca(TreeNode* root, int n1, int n2) {
    TreeNode *curr1=NULL,*curr2=NULL;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode *temp = q.front();
        q.pop();
        if(temp->val == n1)curr1=temp;
        if(temp->val==n2)curr2=temp;
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    if(curr1==NULL||curr2==NULL)return -1;
    TreeNode *ans = lcaU(root,n1,n2);
    return ans->val;
}
