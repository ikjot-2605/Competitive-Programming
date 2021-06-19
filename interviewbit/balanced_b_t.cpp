#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

map<TreeNode*,int> heights;
int height(TreeNode* A){
    if(A==NULL){heights[A]=0;return 0;}
    else{
        int height_is = 1 +max(height(A->left),height(A->right));
        heights[A] = height_is;
        return height_is;
    }
}
int isBalanced(TreeNode* A) {
    heights.clear();
    int height_tree = height(A);
    queue<TreeNode*> q;
    q.push(A);
    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();
        if(curr->left){
            if(curr->right){
                if(abs(heights[curr->left]-heights[curr->right])>1){
                    return false;
                }
            }
            else{
                if(abs(heights[curr->left])>1){
                    return false;
                }
            }
        }
        else if(curr->right){
            if(curr->left){
               if(abs(heights[curr->left]-heights[curr->right])>1){
                    return false;
                } 
            }
            else{
                if(abs(heights[curr->right])>1){
                    return false;
                }
            }
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
    cout<<isBalanced(root);
}