
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

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  using namespace std;
int dfs(TreeNode *root,unordered_map<int,int> &ssum){
	if(root == NULL) return 0;
	int sum = root->val;
	sum += dfs(root->left,ssum);
	sum += dfs(root->right,ssum);
	ssum[sum]++;
	return sum;
}

vector<int> findFrequentTreeSum(TreeNode* root) {
	unordered_map<int,int> ssum;
	dfs(root,ssum);
	int maxVal = INT_MIN;
	for(auto itr=ssum.begin(); itr!=ssum.end(); itr++){
		maxVal = max(maxVal,itr->second);
	}
	vector<int> ans;
	if(maxVal == INT_MIN)
		return ans;
	for(auto itr=ssum.begin(); itr!=ssum.end(); itr++){
		if(itr->second == maxVal)
			ans.emplace_back(itr->first);
	}
    cout<<ans[0]<<ans[1]<<ans[2];
	return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TreeNode* head=new TreeNode(5);
    head->right=new TreeNode(-3);
    head->left=new TreeNode(2);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        findFrequentTreeSum(head);
    }

    return 0;
}