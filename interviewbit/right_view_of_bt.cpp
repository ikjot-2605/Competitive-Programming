#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> symmetric(TreeNode *A)
{
    queue<pair<TreeNode*,int>> q;
    q.push({A,0});
    map<int,vector<int>> ans;
    vector<int> soln;
    while(!q.empty()){
        TreeNode* temp = q.front().first;
        int level = q.front().second;
        q.pop();   
        ans[level].push_back(temp->val);
        if(temp->left){
            q.push({temp->left,level+1});
        }
        if(temp->right){
            q.push({temp->right,level+1});
        }
    }
    for(auto it: ans){
        vector<int> a = it.second;
        soln.push_back(a.back());
    }
    return soln;
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
    vector<int> a=  symmetric(root);
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}