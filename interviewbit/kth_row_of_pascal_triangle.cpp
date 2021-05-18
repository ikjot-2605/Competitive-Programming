
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
#define int long long
using namespace std;

vector<int> solveA(int n){
    vector<int> ans = {};
    int curr = 1;
    ans.push_back(curr);
    for(int i =1;i<=n;i++){
        int temp = curr * (n-i+1)/i ;
        ans.push_back(temp);
        curr = temp;
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        vector<int> ans  = solveA(3);
        for(int i =0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
