
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

vector<vector<int>> solveA(int n){
    vector<vector<int>> pascal;
    if(n==0)return {};
    if(n==1)return {{1}};
    if(n==2)return{{1},{1,1}};
    n--;
    pascal = {{1},{1,1}};
    for(int i = 2;i<=n;i++){
        vector<int> temp;
        for(int j = 0;j<=i;j++){
            if(j==0)temp.push_back(1);
            else if(j==1)temp.push_back(i);
            else if(j<=i/2){
                temp.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
            }
            else{
                temp.push_back(temp[i-j]);
            }
        }
        pascal.push_back(temp);
    }
    return pascal;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        vector<vector<int>> ans  = solveA(5);
        for(int i =0;i<ans.size();i++){
            for(int j = 0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
