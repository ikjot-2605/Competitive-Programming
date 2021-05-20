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
    map<int,int> parents;
    queue<TreeNode*> q;
    q.push(A);
    while(!q.empty()){
        TreeNode *curr = q.front();
        q.pop();
        if(curr->left){
            parents[curr->left->val] = curr->val;
            q.push(curr->left);
        }
        if(curr->right){
            parents[curr->right->val] = curr->val;
            q.push(curr->right);
        }
    }
    int parent_of_B = parents[B];
    int grandparent_of_B;
    if(parents.find(parent_of_B)!=parents.end()) grandparent_of_B = parents[parent_of_B];
    else return {};
    vector<int> ans = {};
    for(auto it:parents){
        int child = it.first;
        int parent = it.second;
        int grandparent_of_child=-1;
        if(parents.find(parent)!=parents.end())grandparent_of_child = parents[parent];
        if(grandparent_of_child==grandparent_of_B&&parent_of_B!=parent){
            ans.push_back(child);
        }
    }
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