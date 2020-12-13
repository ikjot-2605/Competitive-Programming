
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
const int N=200010;
ll a[N],b[N];
int n,m; 
using namespace std;

int solve()
{
    cin>>n>>m;
    ll x,k,y;
    cin>>x>>k>>y;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
 
    ll res=0;
    int l=0;
    for(int i=0,j=0;j<=m;l=b[j],i++,j++){
        int len=0;
        ll mx=0;
        while(i<=n&&a[i]!=b[j]){
            mx=max(mx,a[i++]);
            len++;
        }
        if(i>n){
            cout<<-1<<endl;
            return 0;
        }
        if(len==0) continue;
        if(mx<l||mx<a[i]){
            if(k*y>x){
                res+=(len/k)*x+(len%k)*y;
            }
            else{
                res+=len*y;
            }
        }else{
            if(len<k){
                cout<<-1<<endl;
                return 0;
            }
            res+=min((len/k)*x+(len%k)*y,x+(len-k)*y);
        }
        
    }
    cout<<res<<endl;
    return 0;
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