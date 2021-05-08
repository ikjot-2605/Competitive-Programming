
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

ll exponent(ll x,ll y,ll p){
    
    ll res = 1;

    x = x%p;
    if(x==0)return 0;

    while (y>0)
    {
         
        if (y&1)
            res = (res * x)%p;
             
        y = y >> 1;
         
        x = (x * x)%p;
    }
    return res;
}

void solveA(){
	ll n;
    cin>>n;
    ll answer = exponent(2,n-1,M);
    
    cout<<answer<<endl;
}
void solveB(){

}
void solveC(){

}
void solveD(){

}
void solveE(){

}
void solveF(){

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}
