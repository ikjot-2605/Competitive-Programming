



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

int solveA(int A,int B){
    vector<vector<int>> dp(A,vector<int>(B,0));
    for(int i= 0;i<B;i++){
        dp[0][i]=1;
    }
    for(int i= 0;i<A;i++){
        dp[i][0]=1;
    }
    for(int i = 1;i<A;i++){
        for(int j = 1;j<B;j++){
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[A-1][B-1];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cout<<solveA(2,2);

    return 0;
}
