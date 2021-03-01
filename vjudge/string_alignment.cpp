
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

void solveA(){
	string a;
    string b;
    cin>>a>>b;
    int n = a.length();
    int m = b.length();
    int dp[n][m];
    for(int i = 0;i<n;i++){
        for(int j =0 ;j<m;j++){
            if(i==0)dp[i][j]= j;
            else if(j==0)dp[i][j]=i;
            else if(a[i]==b[j])dp[i][j]=dp[i-1][j-1];
            else{
                dp[i][j] = 1 + min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
    }
    cout<<dp[n-1][m-1]<<endl;
}
void solveB(){

}
void solveC(){

}
void solveD(){

}
void solveE(){

}
void solveF(){

}

int main()
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
