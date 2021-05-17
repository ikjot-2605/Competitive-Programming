
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
class Node
{
public:
    int id;
    int value;
    int parent;
    vector<Node *> kids;
    Node(int id, int value)
    {
        this->id = id;
        this->value = value;
        this->kids = {};
    }
};
int ans;
vector<vector<int>> v_matrix;
vector<int> table1, table2;
void depthFS(int current, int par_val)
{
    table1[current] = 1;
    table2[current] = 1;
    int tot_sum = 0, count = 0;
    for (int i = 0; i < v_matrix[current].size(); i++)
    {
        int curnode = v_matrix[current][i];
        if (curnode != par_val)
        {
            depthFS(curnode, current);
            table1[current] += ((2 * table1[curnode]) % M);
            table1[current] %= M;
            count++;
            table2[current] += table2[curnode];
            table2[current] %= M;
            table2[current] += table1[curnode];
            table2[current] %= M;
            tot_sum += table1[curnode];
        }
    }
    for (int i = 0; i < v_matrix[current].size(); i++)
    {
        int curnode = v_matrix[current][i];
        if (curnode != par_val)
        {
            table2[current] += (table1[curnode] * ((tot_sum - table1[curnode] + M) % M)) % M;
            table2[current] %= M;
        }
    }
}
void solveA()
{
    ans = 0;
    int n;
    cin >> n;
    table1.clear();
    v_matrix.clear();
    table2.clear();
    v_matrix.resize(n + 1), table1.resize(n + 1), table2.resize(n + 1);
    for (int i = 1; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v_matrix[l].push_back(r);
        v_matrix[r].push_back(l);
    }
    depthFS(1, 1);
    int ans = table2[1] % M;
    cout << ans << endl;
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

signed main()
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
