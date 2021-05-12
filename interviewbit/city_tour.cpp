
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
ll power(ll x,ll y){
    ll res=1; 
    while(y){
        if(y&1) res = (res*x)%M; 
        y>>=1; 
        x = (x*x)%M;
    }
    return res;
}
int solve(int A,vector<int> B)
{
    sort(B.begin(),B.end()); 
    vector<int>un_vis; 
    int i=1;
    un_vis.push_back(B[0]-1);
    for(;i<B.size();i++){
        un_vis.push_back(B[i]-B[i-1]-1);
    }
    un_vis.push_back(A-B[i-1]);
    int n = un_vis.size(); 
    ll fact[100000]={1}; 
    for(ll f=1;f<100000;f++) fact[f] = (f*fact[f-1])%M;
    ll ans = 1,x=A-B.size(),p=1;
    for(i=0;i<n;i++){
        if(!un_vis[i]) continue;
        if(i!=0&&i!=n-1) ans = (ans*power(2,un_vis[i]-1))%M;
        p = (p*fact[un_vis[i]])%M;
    }
    ans = (ans*fact[x])%M;
    ans = (ans*power(p,M-2))%M;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve(5,{2,5});

    return 0;
}