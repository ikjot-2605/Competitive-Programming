
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
bool compare(int x, int y) {
      return x % 2 < y % 2;
    }
void solveA(){
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end(),compare);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        ans += __gcd(arr[i], arr[j] * 2) > 1;
      }
    }
    cout << ans << endl;
}

void solveB(){
    string s;
    cin >> s;
    int n = s.length();
    ll dp[n+1][2];

    dp[0][0] = 0;
    dp[0][1] = 0;
    ll ans = 0;
    for(ll i = 1 ; i <= n; ++i){
        if(s[i-1] == '?'){
            dp[i][0] = dp[i-1][1] + 1LL;
            dp[i][1] = dp[i-1][0] + 1LL;
        }else if(s[i-1] == '0'){
            dp[i][0] = dp[i-1][1] + 1LL;
            dp[i][1] = 0;
        }else if(s[i-1] == '1'){
            dp[i][1] = dp[i-1][0] + 1LL;
            dp[i][0] = 0;
        }
        ans += max(dp[i][0] ,  dp[i][1]);
    }

    cout << ans << endl;
}
void solveC(){

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solveB();
    }

    return 0;
}
