
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

int solve(vector<int> x,vector<int> y)
{
    int n=x.size(),ans=0;
    for(int i=0;i<n-1;i++){
        if(abs(x[i]-x[i+1])<=abs(y[i]-y[i+1]))
         ans+=abs(y[i]-y[i+1]);
        else{
            ans+=abs(x[i]-x[i+1]);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    vector<int> a ={0,1,1};
    vector<int> b={0,1,2};
    while (T--)
    {
        solve(a,b);
    }

    return 0;
}