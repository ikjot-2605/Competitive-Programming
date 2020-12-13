
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

int solve(vector<int> A)
{
   int max_curr = INT_MIN, max_end = 0; 
  
    for (int i = 0; i < A.size(); i++) 
    { 
        max_end = max_end + A[i]; 
        if (max_curr < max_end) 
            max_curr = max_end; 
  
        if (max_end < 0) 
            max_end = 0; 
    } 
    return max_curr; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int T = 1;
    //cin >> T;
    while (T--)
    {
       cout<< solve(a);
    }

    return 0;
}