
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
   int n,m;
   cin>>n>>m;
   int a[n];
   int b[m]; 
   int ans=-1;
   set<int> comm;
   for(int i=0;i<n;i++){
       cin>>a[i];
       comm.insert(a[i]);
   }
   for(int i=0;i<m;i++){
       cin>>b[i];
       if(comm.find(b[i])!=comm.end())ans=b[i];
   }
   if(ans==-1){
       cout<<"NO\n";
   } 
   else{
       cout<<"YES\n";
       cout<<"1 "<<ans<<endl;
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}