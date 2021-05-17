
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

int solve(int x,int n,int d)
{
    if(x==0)return 0;
    if(x%d==0)return 0;
    if(d==0)return -1;
    if(n==0)return 1;
    ll base = x;
    ll ans = 1;
    if(d==1)return 0;
    while(n>=1){
        if(n%2){
            ans = (ans*base)%d;
            n--;
        }
        else{
            base = (base*base)%d;
            n/=2;
        }
    }
    if (ans < 0) 
        ans = (ans + d) % d;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve(2,3,3);

    return 0;
}