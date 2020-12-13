
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
   int n,q;
   cin>>n>>q;
   string s;
   cin>>s;
   for(int i=0;i<q;i++){
       int type=0;
       cin>>type;
       if(type==0){
           int l,r;
           cin>>l>>r;
           for(int i=l-1;i<=r-1;i++){
               if(s[i]=='0')s[i]='1';
               else s[i]='0';
           }
       }
       else{
            int l,r;
            cin>>l>>r;
            int count=0;
            for(int i=l-1;i<=r-1;i++){
               count=(count*2)%M;
               if(s[i]=='1')count=(count+1)%M;         
            }
            cout<<count<<endl;
       }
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