
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

string solveA(string A, int B)
{
    int n = A.length();
    int curr = 1;
    char curr_char = A[0];
    string ans;
    for (int i = 1; i < n; i++)
    {
        if (curr == B)
        {
            curr = 1;
            curr_char = A[i];
            continue;
        }
        if (A[i] == curr_char)
            curr++;
        else
        {
            for (int i = 0; i < curr; i++)
            {
                ans.push_back(curr_char);
            }
            curr = 1;
            curr_char = A[i];
        }
    }
    if (curr == B)
    {
    }
    else
    {
        for (int i = 0; i < curr; i++)
        {
            ans.push_back(curr_char);
        }
    }
    return ans;
}
void solveB()
{
}
void solveC()
{
}
void solveD()
{
}
void solveE()
{
}
void solveF()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solveA("aabbccdde", 2);
    }

    return 0;
}
