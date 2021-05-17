#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include<stack>
#include<queue>

#define ll long long int
#define all(x) x.begin(), x.end()
#define MOD 1000000007


using namespace std;
void solve()
{
    ll x,y,a,b;
    cin >>x>>y>>a>>b;
    if((y-x)%(a+b)==0){cout <<(y-x)/(a+b)<<endl;}
    else{cout << "-1" <<endl; }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}