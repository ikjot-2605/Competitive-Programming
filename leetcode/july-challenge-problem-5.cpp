
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

void solve(int x,int y)
{
    int xor_val=x^y;
    int count=0;
    while(xor_val>0){
        int rem=xor_val%2;
        xor_val/=2;
        if(rem==1)count++;
    }
    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x=1,y=4;
    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve(x,y);
    }

    return 0;
}