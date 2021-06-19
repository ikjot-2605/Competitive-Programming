
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


int parent[200005], a[200005], b[200005];
int fp(int u) { return (u == pa[u]) ? u : pa[u] = fp(pa[u]); }
void problemD()
{
    for (int i = 1; i <= 200000; i++)
        parent[i] = i;
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
        cin >> a[i];
    if (n & 1)
        cin >> b[1];
    for (int i = n / 2; i >= 1; i--)
        cin >> b[i];
    int ans = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        int u = fp(a[i]), v = fp(b[i]);
        if (u != v)
        {
            ans++;
            parent[u] = v;
        }
    }
    cout << ans << endl;
}
void problemE()
{
}
void problemF()
{
}

int main()
{

    int T = 1;
    //cin >> T;
    while (T--)
    {
        problemD();
    }
    //cout<<"HIIII";
    return 0;
}
