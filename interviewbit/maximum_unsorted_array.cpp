
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

vector<int> solveA(vector<int> A)
{
    int n = A.size();
    int s = -1;
    int e = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i + 1] < A[i])
        {
            s = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (A[i - 1] > A[i])
        {
            e = i;
            break;
        }
    }
    if(s==-1)return {-1};
    int max = A[s];
    int min = A[s];
    for (int i = s + 1; i <= e; i++)
    {
        if (A[i] > max)
            max = A[i];
        if (A[i] < min)
            min = A[i];
    }

    for (int i = 0; i < s; i++)
    {
        if (A[i] > min)
        {
            s = i;
            break;
        }
    }

    for (int i = n - 1; i >= e + 1; i--)
    {
        if (A[i] < max)
        {
            e = i;
            break;
        }
    }
    if (s == -1 || e == -1)
    {
        return {-1};
    }
    return {s, e};
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        vector<int> ans = solveA({4, 15, 4, 4, 15, 18, 20});
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
