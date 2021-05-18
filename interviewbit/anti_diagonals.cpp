
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

vector<vector<int>> solve(vector<vector<int>> A)
{
    vector<vector<int>> ans;
    int n = A.size();
    for(int i =0 ;i<n;i++){
        vector<int> temp;
        for(int j = 0;j<=i;j++){
            temp.push_back(A[j][i-j]);
        }
        ans.push_back(temp);
    }
    for(int i =1 ;i<n;i++){
        vector<int> temp;
        for(int j = n-1;j>=i;j--){
            temp.push_back(A[i-j+(n-1)][j]);
        }
        ans.push_back(temp);
    }  
    return ans;     
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> a = solve({{1,2,3},{4,5,6},{7,8,9}});
    a = solve({});
    for(int i =0 ;i<a.size();i++){
        for(int j = 0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}