
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
   int n,x;
   cin>>n>>x;
   vector<int> arr;
   for(int i=0;i<n;i++){
       int dum;
       cin>>dum;
       arr.push_back(dum);
   }
   sort(arr.begin(),arr.end());
   int tsize=0;
   int minval=0;
   int teams=0;

   for(int i=arr.size()-1;i>=0;i--){
       tsize++;
       minval=arr[i];
       if(tsize*minval>=x){
           teams++;
           tsize=0;
           minval=0;
       } 
   }
   cout<<teams<<endl;
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