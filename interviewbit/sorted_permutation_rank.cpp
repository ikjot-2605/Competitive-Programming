
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
const unsigned int M = 10003;
const long double PI = 3.141592653589793236L;

typedef long long int ll;
typedef long double ld;
#define MAX 50
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fact(n - 1)) % M;
}
int solve(string A)
{
    string s = A;
    //cin>>s;
    int ans = 0;
    int n = s.length();
    for (int i = 0; i < n - 1; i++)
    {
        int c = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] < s[i])
                c++;
        }
        ans += ((c * fact(n - i - 1))) % M;
        //cout << c <<" "<<ans<< endl;
    }
    return (ans + 1) % M;
    //cout << ans+1 ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << solve("acb");
    return 0;
}