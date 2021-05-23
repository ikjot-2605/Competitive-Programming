
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
    ll a, b, c;
    cin >> a >> b >> c;
    cout << (21) - (a + b + c) << endl;
}
void solveB()
{
    string S;
    cin >> S;
    reverse(all(S));
    for (ll i = 0; i < S.length(); i++)
    {
        if (S[i] == '6')
            S[i] = '9';
        else if (S[i] == '9')
            S[i] = '6';
    }
    cout << S << endl;
}
void solveC()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<ll> b(n + 1);
    vector<ll> C(n + 1);
    map<ll, ll> inA;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i + 1];
        inA[a[i + 1]]++;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i + 1];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> C[i + 1];
    }
    ll count = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (inA.find(b[C[i]]) != inA.end())
        {
            count += inA[b[C[i]]];
        }
    }
    cout << count << endl;
}
ll fact(ll n);

ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
string solveDUtil(ll a, ll b, ll k)
{
    if (a == 1 && b == 1)
    {
        if (k == 1)
            return "ab";
        else
            return "ba";
    }
    if (a == 0 && b == 1)
    {
        return "b";
    }
    if (a == 1 && b == 0)
    {
        return "a";
    }
    if (a == 0 && b == 0)
        return "";
    if (a == 0)
    {
        string c;
        for (ll i = 0; i < b; i++)
        {
            c.push_back('b');
        }
        return c;
    }
    if (b == 0)
    {
        string c;
        for (ll i = 0; i < a; i++)
        {
            c.push_back('a');
        }
        return c;
    }
    ll prev = b;
    ll temp = k;
    k--;
    ll current_first_b_index = a;
    string s;
    ll ways = 1;
    ll front_a_count = current_first_b_index;
    ll behind_a_count = 0;
    ll behind_b_count = b;
    while (temp > 0)
    {

        if (temp > ways)
        {
            current_first_b_index--;
            front_a_count = current_first_b_index;
            behind_a_count = a - front_a_count;
            behind_b_count = b - 1;
            temp -= ways;
            ways = ways * (behind_b_count + behind_a_count) / (behind_a_count);
        }
        else
        {
            for (ll i = 0; i < front_a_count; i++)
            {
                s.push_back('a');
            }
            s.push_back('b');
            return s.append(solveDUtil(a - front_a_count, b - 1, temp));
        }
    }
    return "";
}
void solveD()
{
    ll a, b, k;
    cin >> a >> b >> k;
    cout << solveDUtil(a, b, k) << endl;
}

// class Tree{
//     public:
//         ll val;
//         Tree *right;
//         Tree* left;
//         Tree(ll val){
//             this->val = val;
//         }
// };
void solveE()
{
    ll n;
    cin >> n;
    vector<ll> parents(n);
    parents[0] = -1;
    for (ll i = 1; i < n; i++)
    {
        cin >> parents[i];
    }
    vector<ll> num_children(n);
    num_children[0] = n - 1;

    ll q;
    cin >> q;
    while (q--)
    {
    }
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
        solveD();
    }

    return 0;
}
