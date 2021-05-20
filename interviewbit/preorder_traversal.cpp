#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

vector<int> verticalOrderTraversal(TreeNode* A) {
    stack<TreeNode*> s;
    TreeNode* temp = A;
    s.push(A);
    vector<int> ans;
    while(!s.empty()){
        temp = s.top();
        ans.push_back(temp->val);
        s.pop();
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left)s.push(temp->left);
    }
    return ans;
}

int main(){
    TreeNode* root = new TreeNode(7);
    TreeNode* a1 = new TreeNode(5090);
    TreeNode* a2 = new TreeNode(9569);
        TreeNode* a3 = new TreeNode(3628);
    root->left = a1;
    root->right = a2;
    root->left->right =a3;
    vector<int> a =  verticalOrderTraversal(root); 
    cout<<a.size()<<endl;
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}