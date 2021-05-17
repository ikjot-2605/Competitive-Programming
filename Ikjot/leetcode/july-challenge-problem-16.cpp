
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

double solve(double x,int n)
{
 double ans=1;
        if(x==1)return 1;
        if(n<=INT_MIN)n=INT_MIN+1;
        if(n>0){
            for(int i=0;i<n;i++){
                ans*=x;
            }
            return ans;
        }
        else if(n<0){
            for(int i=0;i<n*-1;i++){
                ans/=x;
            }
            return ans;
        }
        else{
            return 1.0;
        }  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    double x=2.00000;
    int n=-2147483647;
    //cin >> T;
    while (T--)
    {
      cout<<  solve(x,n);
    }

    return 0;
}