#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
map<int,vector<int>> m;
void util(int d,TreeNode* curr){
    if(!curr)return;
    m[d].push_back(curr->val);
    util(d+1,curr->left);
    util(d,curr->right);
}
vector<int> verticalOrderTraversal(TreeNode* A) {
    m.clear();
    util(0,A); 
    vector<int> ans;
    for(auto it:m){
        vector<int> v= it.second;
        for(int i =0;i<v.size();i++){
            ans.push_back(v[i]);
        }
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