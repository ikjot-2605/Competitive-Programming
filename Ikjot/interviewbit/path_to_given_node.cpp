
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

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
void dfsUtil(TreeNode* A, int curr,int dest){
    
}
vector<int> solveA(TreeNode* A, int B){
    queue<TreeNode*> q;
    if(A->val==B)return {A->val};
    else q.push(A);
    vector<int> parent(1000001,-1);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
            parent[temp->left->val]=temp->val;
        }   
        if(temp->right){
            q.push(temp->right);
            parent[temp->right->val]=temp->val;
        } 
    }
    int val = B;
    vector<int> answer;
    while(val!=1){  
        answer.push_back(val);
        val = parent[val];
    }
    reverse(answer.begin(),answer.end());
    if(answer[0]!=1){
        answer.insert(answer.begin(),1);
    }
    return answer;
}
void solveB(){

}
void solveC(){

}
void solveD(){

}
void solveE(){

}
void solveF(){

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        //cout<<solveA("aaaaa");
    }

    return 0;
}
