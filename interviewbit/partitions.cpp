
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

int solve(int A, int B  [])
{
   int cnt[A] = {0}, s = 0; 
      
    
    for (int i = 0 ; i < A ; i++) 
    { 
        s += B[i]; 
    } 
  
    if (s % 3 != 0) 
        return 0; 
      
    s /= 3; 
      
    int ss = 0; 
    for (int i = A-1; i >= 0 ; i--) 
    { 
        ss += B[i]; 
        if (ss == s) 
            cnt[i] = 1; 
    } 
      
   for (int i = A-2 ; i >= 0 ; i--) 
        cnt[i] += cnt[i + 1]; 
      
    int ans = 0; 
    ss = 0; 
      
    for (int i = 0 ; i+2 < A ; i++) 
    { 
        ss += B[i]; 
        if (ss == s) 
            ans += cnt[i + 2]; 
    } 
    return ans; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int aee[6]={1,2,0,3,0,3};
    int T = 1;
    //cin >> T;
    while (T--)
    {
      cout<<  solve(6,aee);
    }

    return 0;
}