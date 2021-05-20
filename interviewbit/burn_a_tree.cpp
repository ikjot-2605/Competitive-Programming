#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    //TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> symmetric(TreeNode *A,int B)
{
    
}
int Height(TreeNode *A)
{
    if(A == NULL) return -1;
    
    int l = Height(A->left);
    int r = Height(A->right);
    
    return 1 + max(l, r);
}
int ans = 0;
pair<int, bool> F(TreeNode *A, int B)
{
    if(A == NULL) return {0, false};
    if(A->val == B)
    {
        ans = max(ans, Height(A));
        return {1, true};
    }
    
    pair<int, bool> l = F(A->left, B);
    pair<int, bool> r = F(A->right, B);
    
    if(l.second == true)
    {
        ans = max(ans, l.first + r.first);
        return {l.first + 1, true}; 
    }
    if(r.second == true)
    {
        ans = max(ans, l.first + r.first);
        return {r.first + 1, true}; 
    }
    return {1 + max(l.first, r.first), false};
}
int solve(TreeNode* A, int B) 
{
    ans = 0;
    
    F(A, B);
    return ans;
}
TreeNode *newNode(int item)
{
    TreeNode *temp = new TreeNode;
    temp->val = item;
    temp->left = temp->right = NULL;
    return temp;
}
int main()
{
    TreeNode *root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(2);

    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->left->left->left = newNode(7);
    root->left->left->right = newNode(8);
    root->left->right->left = newNode(9);
    root->left->right->right = newNode(10);
    root->right->left->left = newNode(11);
    root->right->left->right = newNode(12);
    root->right->right->left = newNode(13);
    root->right->right->right = newNode(14);

    
    vector<int> a=  symmetric(root,8);
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}