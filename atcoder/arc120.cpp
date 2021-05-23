
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

void solveA()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> a = arr;
    vector<ll> prefix_sum = arr;
    vector<ll> maxi = arr;
    ll maximum = arr[0];
    for (ll i = 1; i < n; i++)
    {
        prefix_sum[i] += prefix_sum[i - 1];
        if (arr[i] > maxi[i-1])
        {
            maxi[i] = arr[i];
        }
        else maxi[i]=maxi[i-1];
    }
    vector<ll> vals(n);
    vals[0] = arr[0] * 2;
    //vals[1] = 2*prefix_sum[1]+maxi[1];
    for (ll i = 1; i < n; i++)
    {
        ll sum_till_here = prefix_sum[i];
        ll max_till_here = maxi[i - 1];
        if (arr[i] > max_till_here)
        {
            vals[i] += (vals[i - 1]) + (i) * (arr[i] - max_till_here) + arr[i] + prefix_sum[i];
        }
        else
        {
            vals[i] = vals[i - 1] + (arr[i - 1] + arr[i] + prefix_sum[i - 1]);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << vals[i] << endl;
    }
}
void solveB()
{
}
void solveC()
{
}
void solveD()
{
}
void solveE()
{
}
void solveF()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T = 1;
    //cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}
