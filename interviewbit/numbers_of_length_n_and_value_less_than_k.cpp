


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
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
vector<int> numToVec(int N)
{
    vector<int> digit;
  
    
    
    while (N != 0) {
        digit.push_back(N % 10);
        N = N / 10;
    }
  
    
    if (digit.size() == 0)
        digit.push_back(0);
  
    
    reverse(digit.begin(), digit.end());
  
    
    return digit;
}
int solve(vector<int> A, int B, int C)
{
    vector<int> digit;
    int d, d2;
  
    
    digit = numToVec(C);
    d = A.size();
  
    
    
    
    if (B > digit.size() || d == 0)
        return 0;
  
    
    
    else if (B < digit.size()) {
        
        if (A[0] == 0 && B != 1)
            return (d - 1) * pow(d, B - 1);
        else
            return pow(d, B);
    }
  
    
    else {
        int dp[B + 1] = { 0 };
        int lower[MAX + 1] = { 0 };
  
        
        
        
        for (int i = 0; i < d; i++)
            lower[A[i] + 1] = 1;
        for (int i = 1; i <= MAX; i++)
            lower[i] = lower[i - 1] + lower[i];
  
        bool flag = true;
        dp[0] = 0;
        for (int i = 1; i <= B; i++) {
            d2 = lower[digit[i - 1]];
            dp[i] = dp[i - 1] * d;
  
            
            if (i == 1 && A[0] == 0 && B != 1)
                d2 = d2 - 1;
  
            
            
            if (flag)
                dp[i] += d2;
  
            
            flag = (flag & (lower[digit[i - 1] + 1]
                            == lower[digit[i - 1]] + 1));
        }
        return dp[B];
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout<<solve({0,1,5},1,2);

    return 0;
}