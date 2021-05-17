
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

int maxResult(vector<int> nums, int k) {
        int n = nums.size();
        int score[n];
        deque<pair<int,int>> q;
        q.push_back({0,nums[0]});
        for(int i =1;i<n;i++){
            int curr = nums[i] + q.front().second;
            while(!q.empty()&&curr>=q.back().second){
                q.pop_back();
            }
            q.push_back({i,curr});
            while(q.front().first<=i-k){
                q.pop_front();
            }
        }
        return q.back().second;
    }

int maxResult1(vector<int> nums, int k) {
	int n = nums.size();

	deque<pair<int, int>> q; // <index, max_path_sum>
	q.push_back({0, nums[0]});

	for (int i = 1; i < n; ++i) {
		int cur = nums[i] + q.front().second;
		while (!q.empty() && cur >= q.back().second)
			q.pop_back();
		q.push_back({i, cur});
		
		if (q.front().first <= i - k)
			q.pop_front();
	}

	return q.back().second;
}

void solve()
{
   cout<<maxResult({1,-5,-20,4,-1,3,-6,-3},2)<<endl;
   cout<<maxResult1({1,-5,-20,4,-1,3,-6,-3},2)<<endl;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}