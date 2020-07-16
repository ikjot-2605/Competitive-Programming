
/*COMPETITIVE PROGRAMMING C++ TEMPLATE */

#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include <stack>
#include <queue>
#include <climits>
#include <iomanip>
#include <iterator>

#define all(x) x.begin(), x.end()
#define MOD 998244353
const unsigned int M = 1000000007;
const long double PI = 3.141592653589793236L;

typedef long long int ll;
typedef long double ld;
#define MAX 50
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool solve(TreeNode* p, TreeNode* q)
{
    //we're going to do a traversal and check each node
    if (p == NULL && q!=NULL){return false;} 
    if(p==NULL&&q==NULL){return true;}
  
   
    stack<TreeNode *> P;
    
    stack<TreeNode *> Q; 
    P.push(p); 
    Q.push(q);
    /* Pop all items one by one. Do following for every popped item 
       a) print it 
       b) push its right child 
       c) push its left child 
    Note that right child is pushed first so that left is processed first */
    while (P.empty() == false&&Q.empty() == false) 
    {   
        // Pop the top item from stack and print it 
        struct TreeNode *node1 = P.top();
        struct TreeNode *node2 = Q.top();
        if(node1!=NULL&&node2!=NULL){
            if(node1->val!=node2->val){
                return false;
            }
        }  
        else{
            return false;
        }
        P.pop(); 
        Q.pop();
        // Push right and left children of the popped node to stack 
        if (node1->right) 
            P.push(node1->right); 
        if (node1->left) 
            P.push(node1->left); 
        if (node2->right) 
            Q.push(node2->right); 
        if (node2->left) 
            Q.push(node2->left);     
    } 
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TreeNode* tree1=new TreeNode(1);
    tree1->left=new TreeNode(2);
    tree1->right=new TreeNode(1);
    
    TreeNode* tree2=new TreeNode(1);
    tree2->left=new TreeNode(2);
    tree2->right=new TreeNode(1);
    int T = 1;
    //cin >> T;
    while (T--)
    {
       cout<< solve(tree1,tree2);
    }

    return 0;
}