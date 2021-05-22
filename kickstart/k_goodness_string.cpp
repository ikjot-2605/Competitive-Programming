
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

void solveA(int t)
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n / 2; i++)
    {
            count+=(s[i] != s[n-1-i]);
        
    }
    cout<<"Case #"<<t<<": " <<abs(k-count)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 0;
    cin >> T;
    for(int i =1;i<=T;i++){
        solveA(i);
    }

    return 0;
}
