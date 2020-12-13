
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

void solve()
{
   int n,R,r;
   cin>>n>>R>>r;
   if(n==1){
       if(R>r)cout<<"YES\n";
       else cout<<"NO\n";
       return;
   }
   else{
      if((R-r)*sin(PI/n)>=r-1e-7)cout<<"YES\n";
      else cout<<"NO\n"; 
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}