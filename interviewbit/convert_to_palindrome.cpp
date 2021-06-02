
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
bool isPalindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}
int solveA(string A)
{
    int n = A.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (A[i] == A[n - i - 1])
        {
        }
        else
        {
            //need to remove one of these
            string temp = "";
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                    temp.push_back(A[j]);
            }
            string temp2 = "";
            for (int j = 0; j < n; j++)
            {
                if (j != n - 1 - i)
                    temp2.push_back(A[j]);
            }
            if (isPalindrome(temp) || isPalindrome(temp2))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
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
        cout << solveA("abecbea");
    }

    return 0;
}
