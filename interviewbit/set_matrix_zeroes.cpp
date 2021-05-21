
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

vector<vector<int>> solveA(vector<vector<int>> A)
{
    int n = A.size();
    unordered_set<int> zeroes_row;
    unordered_set<int> zeroes_col;
    for(int i =0 ;i<n;i++){
        for(int j  =0 ;j<n;j++){
            if(A[i][j]==0){zeroes_col.insert(j);zeroes_row.insert(i);}
        }
    }
    for(auto it: zeroes_row){
        int row = it;
        for(int i = 0;i<n;i++){
            A[row][i]=0;
        }
    }
    for(auto it: zeroes_col){
        int col = it;
        for(int i = 0;i<n;i++){
            A[i][col]=0;
        }
        
    }
    return A;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        vector<vector<int>> a = solveA({{1, 0, 1},
                                        {1, 1, 1},
                                        {1, 0, 1}});
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < a[i].size(); j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
