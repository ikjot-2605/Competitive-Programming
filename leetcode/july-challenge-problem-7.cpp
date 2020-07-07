
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

void solve(vector<vector<int>> grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                int vertical = 0;
                int horizontal = 0;
                int neighbours = 4;
                if (i + 1 <= grid.size()-1)
                {
                    if (grid[i + 1][j] == 1)
                        neighbours--;
                }
                if (i - 1 >= 0)
                {
                    if (grid[i - 1][j] == 1)
                        neighbours--;
                }
                if (j + 1 <= grid[i].size()-1)
                {
                    if (grid[i][j + 1] == 1)
                        neighbours--;
                }
                if (j - 1 >= 0)
                {
                    if (grid[i][j - 1] == 1)
                        neighbours--;
                }
                count += neighbours;
            }
        }
    }
    cout<<count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> grid = {{0, 1, 0, 0},
                                {1, 1, 1, 0},
                                {0, 1, 0, 0},
                                {1, 1, 0, 0}};
    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve(grid);
    }

    return 0;
}