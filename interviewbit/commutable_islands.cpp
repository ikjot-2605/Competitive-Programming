
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

int Rank[1000005];
int Parent[1000005];
 
int Find(int x)
{
    if(x!=Parent[x])
        Parent[x] = Find(Parent[x]);
    return Parent[x];
}
 
int Union(int u, int v, int cost)
{
    int x = Find(u);
    int y = Find(v);
 
    if(x==y)
        return 0;
 
    if(Rank[x] > Rank[y])
    {
        Parent[y] = x;
        Rank[x] += Rank[y];
    }
    else
    {
        Parent[x] = y;
        Rank[y] += Rank[x];
    }
 
    return cost;
}
 
bool comp(const vector<int> &a, const vector<int> &b)
{
    return a[2] < b[2];
}
 
int solveA(int A, vector<vector<int> > B)
{
    for(int i=0;i<A;i++)
    {
        Parent[i] = i;
        Rank[i] = 1;
    }
 
    sort(B.begin(), B.end(), comp);
 
    int n = B.size();
    int ans = 0;
 
    for(int i=0;i<n;i++)
        ans += Union(B[i][0]-1, B[i][1]-1, B[i][2]);
 
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
    cout << solveA(4, {{1, 2, 1},
                       {2, 3, 2},
                       {3, 4, 4},
                       {1, 4, 3}});
}