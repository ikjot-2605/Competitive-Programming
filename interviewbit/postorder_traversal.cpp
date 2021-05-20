#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> verticalOrderTraversal(TreeNode *A)
{
    vector<int> res;
    stack<TreeNode*> stack;
    if (!A)
        return res;
    stack.push(A);
    
    while (!stack.empty())
    {
        TreeNode* node = stack.top();
        res.emplace_back(node->val);
        stack.pop();
        if (node->left)
            stack.push(node->left);
        if (node->right)
            stack.push(node->right);
    }
    reverse(res.begin(), res.end());
    return res;
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
    vector<int> a = verticalOrderTraversal(root);
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}