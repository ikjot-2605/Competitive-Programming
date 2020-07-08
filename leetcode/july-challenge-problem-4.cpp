
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

void solve(int n)
{
    vector<int> res(1, 1);
    int two = 0, three = 0, five = 0, next = 1;
    n = n - 1;
    while (n--)
    {
        next = min(res[two] * 2, min(res[three] * 3, res[five] * 5));
        if (next == res[two] * 2)
        {
            two++;
        }
        if (next == res[three] * 3)
        {
            three++;
        }
        if (next == res[five] * 5)
        {
            five++;
        }
        res.push_back(next);
    }
    cout << res.back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 10;
    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve(x);
    }

    return 0;
}