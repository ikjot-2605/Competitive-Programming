
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
   int l,r;
   cin>>l>>r;
   if((double)r/(double)l<2){
       cout<< "-1 -1"<<endl;
   }
   else{
       if(r%2==0){
           cout<<r/2<<" "<<r<<endl;
       }
       else{
           cout<<l<<" "<<l*2<<endl;
       }
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