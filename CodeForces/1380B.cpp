
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
    string str;
    cin >> str;
    int r=0,s=0,p=0;
    int length=str.length();
    for(int i=0;i<str.length();i++){
        if(str.at(i)=='R')r++;
        if(str.at(i)=='S')s++;
        if(str.at(i)=='P')p++;
    }
    int ma=max(max(p,s),r);
    for(int i=0;i<length;i++){
        if(ma==r){cout<<"P";}
        else if(ma==s){cout<<"R";}
        else if(ma==p){cout<<"S";}
    }
    cout<<endl;
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