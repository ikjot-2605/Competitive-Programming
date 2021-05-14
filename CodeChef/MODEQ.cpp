
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
    ll n_var;
    ll m_var;
    cin >> n_var;
    cin >> m_var;
    ll var_for_counting = 0;
    vector<ll> m_var_vector(n_var + 1, 1);
    for (ll i = 2; i < n_var + 1; i++)
    {
        ll a_var = m_var % i;
        var_for_counting += m_var_vector[a_var];
        for (ll j = a_var; j <= n_var; j += i)
        {
            m_var_vector[j]++;
        }
    }
    cout << var_for_counting << endl;
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

    int T = 1;
    cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}
