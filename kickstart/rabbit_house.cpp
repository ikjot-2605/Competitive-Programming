
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

const int d[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
void solveA(int t)
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> m(r, vector<int>(c, 0));
    
    priority_queue<tuple<int, int, int>> q;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            cin >> (m[i][j]);
            q.emplace(m[i][j], i, j);
        }
    vector<vector<int>> g0(m);
    while (!q.empty())
    {
        int h, i, j;
        tuple<int, int, int> x = q.top();
        h = get<0>(x);
        i = get<1>(x);
        j = get<2>(x);
        q.pop();
        if (h < m[i][j])
            continue;
        for (int k = 0; k < 4; ++k)
        {
            int ni = i + d[k][0], nj = j + d[k][1];
            if (ni < 0 || ni >= r || nj < 0 || nj >= c)
                continue;
            if (h - 1 > m[ni][nj])
            {
                q.emplace(h - 1, ni, nj);
                m[ni][nj] = h - 1;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            ans += m[i][j] - g0[i][j];
    cout << "Case #" << t << ": " << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 0;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        solveA(i);
    }

    return 0;
}
