
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

int solve(vector<string> arr)
{
   int n = arr.size(), i;
    vector<float> v;
    for (i = 0; i < n; i++) {
        v.push_back(stof(arr[i]));
    }
    float a = v[0], b = v[1], c = v[2];

    float mx = 0;
    for (i = 3; i < n; i++) {
        if (a + b + c < 2 && a + b + c > 1)
            return 1;
        else if (a + b + c > 2) {
            if (a > b && a > c)
                a = v[i];
            else if (b > a && b > c)
                b = v[i];
            else
                c = v[i];
        } else {
            if (a < b && a < c)
                a = v[i];
            else if (b < a && b < c)
                b = v[i];
            else
                c = v[i];
        }
    }
    if (a + b + c > 1 && a + b + c < 2)
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> demo={"0.6","0.7","0.8"};
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve(demo);
    }

    return 0;
}