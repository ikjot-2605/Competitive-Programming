
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

void solveA(int t)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> m(r,vector<int>(c,0));
    vector<vector<int>> N(r,vector<int>(c,0));
    vector<vector<int>> S(r,vector<int>(c,0));
    vector<vector<int>> E(r,vector<int>(c,0));
    vector<vector<int>> W(r,vector<int>(c,0));
    for(int i =0 ;i<r;i++){
        for(int j =0;j<c;j++){
            cin>>m[i][j];
        }
    }
    for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
        if (m[i][j]) {
          W[i][j] = 1;
          if (j >= 1)
            W[i][j] += W[i][j - 1];
        }
      }
      for (int j = c - 1; j >= 0; --j) {
        if (m[i][j]) {
          E[i][j] = 1;
          if (j + 1 < c)
            E[i][j] += E[i][j + 1];
        }
      }
    }
    for (int j = 0; j < c; ++j) {
      for (int i = 0; i < r; ++i) {
        if (m[i][j]) {
          N[i][j] = 1;
          if (i >= 1)
            N[i][j] += N[i - 1][j];
        }
      }
      for (int i = r - 1; i >= 0; --i) {
        if (m[i][j]) {
          S[i][j] = 1;
          if (i + 1 < r)
            S[i][j] += S[i + 1][j];
        }
      }
    }
    ll ans = 0;
    for (int i = 0; i < r; ++i)
      for (int j = 0; j < c; ++j) {
        ans += max(0, min(W[i][j], N[i][j] / 2) - 1);
        ans += max(0, min(W[i][j] / 2, N[i][j]) - 1);
        ans += max(0, min(W[i][j], S[i][j] / 2) - 1);
        ans += max(0, min(W[i][j] / 2, S[i][j]) - 1);
        ans += max(0, min(E[i][j], N[i][j] / 2) - 1);
        ans += max(0, min(E[i][j] / 2, N[i][j]) - 1);
        ans += max(0, min(E[i][j], S[i][j] / 2) - 1);
        ans += max(0, min(E[i][j] / 2, S[i][j]) - 1);
      }

  
    cout<<"Case #"<<t<<": " <<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 0;
    cin >> T;
    for(int i =1;i<=T;i++){
        solveA(i);
    }

    return 0;
}
