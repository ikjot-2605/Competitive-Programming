
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
    int n = A.size();
    for(int i =0;i<n/2;i++){
        for(int j = i;j<n-i-1;j++){
            int temp = A[i][j];
            A[i][j] = A[n-j-1][i];
            A[n - 1 - j][i] = A[n - 1 - i][n - 1 - j];
            A[n - 1 - i][n - 1 - j] = A[j][n - 1 - i];
            A[j][n - 1 - i] = temp;
        }
    }
    return A;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //vector<string> demo={"0.6","0.7","0.8"};
    vector<vector<int>> q = {{1,2},{3,4}};
    vector<vector<int>> A = solve(q);
    for(int i =0;i<A.size();i++){
        for(int j =0;j<A.size();j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}