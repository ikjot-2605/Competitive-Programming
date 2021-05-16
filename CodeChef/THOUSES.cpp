
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
vector<vector<int>> tree_matrix;
vector<int> substi_val, val_vec;
vector<pair<int, int>> char_matr;
void dfs(int now_val, int last_val)
{
    for (auto x : tree_matrix[now_val])
    {
        if (x == last_val)
            continue;
        dfs(x, now_val);
    }
    char_matr.clear();
    for (auto x : tree_matrix[now_val])
    {
        if (x != last_val)
            char_matr.push_back({substi_val[x], x});
    }
    sort(char_matr.rbegin(), char_matr.rend());
    int total_val = 1;
    for (int i = 0; i < char_matr.size(); i++)
    {
        val_vec[char_matr[i].second] += total_val++;
    }
    for (auto x : tree_matrix[now_val])
    {
        if (x != last_val)
        {
            substi_val[now_val] += val_vec[x] * substi_val[x];
        }
    }
}
void solveA()
{
    int n, x;
    cin >> n >> x;
    substi_val.assign(n, 1);
    val_vec.assign(n, 0);
    tree_matrix.clear();
    tree_matrix.resize(n);
    while (n-- > 1)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        tree_matrix[u].push_back(v);
        tree_matrix[v].push_back(u);
    }
    dfs(0, -1);
    cout << substi_val[0] % M * x % M << endl;
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
