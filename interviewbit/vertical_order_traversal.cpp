#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
vector<vector<int> > verticalOrderTraversal(TreeNode* A) {
    vector<vector<int> > v;
    if(A == NULL)return v;
    
    queue<pair <TreeNode*, int> > q;
    q.push({A, 0});
    
    map<int, vector<int> > mp;
    while(!q.empty()){
        pair<TreeNode*, int> temp = q.front();
        q.pop();
        
        if(temp.first->left){
            q.push({temp.first->left, temp.second-1});
        }
        if(temp.first->right){
            q.push({temp.first->right, temp.second+1});
        }
        
        mp[temp.second].push_back(temp.first->val);
    }

    for(map<int, vector<int> >::iterator it = mp.begin(); it != mp.end(); it++){
        v.push_back(it->second);
    }
    return v;
}

int main(){
    TreeNode* root = new TreeNode(7);
    TreeNode* a1 = new TreeNode(5090);
    TreeNode* a2 = new TreeNode(9569);
        TreeNode* a3 = new TreeNode(3628);
    root->left = a1;
    root->right = a2;
    root->left->right =a3;
    vector<vector<int>> a =  verticalOrderTraversal(root); 
    cout<<a.size()<<endl;
    for(int i =0;i<a.size();i++){
        for(int j = 0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}