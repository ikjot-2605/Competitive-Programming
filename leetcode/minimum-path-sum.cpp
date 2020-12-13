
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

int solve(int m,int n)
{
    vector<vector<int>> grid;
    for(int i=0;i<n;i++){
        vector<int> arr;
        for(int j=0;j<m;j++){
            arr.push_back(0);
        }
        grid.push_back(arr);
    }
    for(int i=0;i<m;i++){
        grid[0][i]=1;
    }
    for(int i=0;i<n;i++){
        grid[i][0]=1;
    }
    for(int i=1;i<grid.size();i++){
        for(int j=1;j<grid[0].size();j++){
            grid[i][j]=grid[i-1][j]+grid[i][j-1];
        }
    }
    int c= grid[grid.size()-1][grid[0].size()-1];
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m=7;int n=3;
    int T = 1;
    //cin >> T;
    while (T--)
    {
        cout<<solve(m,n);
    }

    return 0;
}