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
ll rev_num(ll num){
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;

}
void solve()
{
    ll n;
    cin >>n;
    ll rev=rev_num(n);
    cout << rev << endl;

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

