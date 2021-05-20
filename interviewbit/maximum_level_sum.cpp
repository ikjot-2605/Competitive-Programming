#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
int solve(TreeNode* A) {
    int max_ans = A->val;
    queue<pair<TreeNode*,int>> q;
    q.push({A,0});
    int curr_level_sum = 0;
    int curr_level = 0;
    while(!q.empty()){
        TreeNode* temp = q.front().first;
        int level = q.front().second;
        q.pop();
        if(level==curr_level)curr_level_sum+=temp->val;
        else{
            if(max_ans<curr_level_sum)max_ans = curr_level_sum;
            curr_level++;
            curr_level_sum=temp->val;
        }
        if(temp->left){
            q.push({temp->left,level+1});
        }
        if(temp->right){
            q.push({temp->right,level+1});
        }
    }
    if(max_ans<curr_level_sum)max_ans = curr_level_sum;
    return max_ans;
}

int main(){
    TreeNode* root = new TreeNode(7);
    TreeNode* a1 = new TreeNode(5090);
    TreeNode* a2 = new TreeNode(9569);
        TreeNode* a3 = new TreeNode(3628);
    root->left = a1;
    root->right = a2;
    root->left->right =a3;
    cout<<  solve(root); 
    
}