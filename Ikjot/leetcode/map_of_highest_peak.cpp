
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

vector<vector<int>> solveA(vector<vector<int>> isWater)
{
    vector<int> directions = {-1,0,1,0,-1};
    int n = isWater.size();
    int m = isWater[0].size();
    vector<vector<int>> ans(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (isWater[i][j] == 1)
                q.push({i, j});
        }
    }
    int l = 0;
    while (!q.empty())
    {
        int s = q.size();
        while(s--){
            pair<int,int> temp = q.front();
            q.pop();
            int a = temp.first;
            int b = temp.second;
            ans[a][b] = l;
            for(int i =0;i<4;i++){
                if(a+directions[i]<n&&a+directions[i]>=0&&b+directions[i+1]<m&&b+directions[i+1]>=0&&isWater[a+directions[i]][b+directions[i+1]]==0){
                    q.push({a+directions[i],b+directions[i+1]});
                    isWater[a+directions[i]][b+directions[i+1]] = 1;
                }
            }
        }
        l++;
    }
    return ans;
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
        solveA({{0,1}, {0,0}});
    }

    return 0;
}
