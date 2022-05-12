
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> temp;
    for (int i = 0; i < n; i++)
    {
        temp[a[i]]++;
    }
    vector<int> v;
    for (auto it = temp.begin(); it != temp.end(); it++)
    {
        if ((*it).second >= k)
        {
            v.push_back((*it).first);
        }
    }
    if (v.empty())
    {
        cout << -1 << endl;
        return;
    }
    sort(v.begin(), v.end());
    int start = v[0];
    int end = v[0];
    pair<int, int> currans = {start, end};
    for (int i = 1; i < v.size(); i++)
    {
        // cout << start << " " << end << " " << v[i] << endl;
        if (end + 1 == v[i])
        {
            end++;
        }
        else
        {
            if (end - start > currans.second - currans.first)
            {
                currans = {start, end};
            }
            start = v[i];
            end = v[i];
        }
        // cout << start << " " << end << endl;
    }
    if (end - start > currans.second - currans.first)
    {
        currans = {start, end};
    }
    cout << currans.first << " " << currans.second << endl;
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
