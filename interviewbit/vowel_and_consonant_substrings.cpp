
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
bool isSafe(int n, int ind)
{
    if (ind < n && ind >= 0)
        return true;
    return false;
}
int solveA(string A)
{
    int n = A.length();
    vector<int> consonants(n);
    vector<int> vowels(n);
    if (A[0] == 'a' || A[0] == 'e' || A[0] == 'i' || A[0] == 'o' || A[0] == 'u')
    {
        consonants[0] = 0;
        vowels[0] = 1;
    }
    else
    {
        consonants[0] = 1;
        vowels[0] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            consonants[i] = consonants[i - 1];
            vowels[i] = vowels[i - 1] + 1;
        }
        else
        {
            consonants[i] = consonants[i - 1] + 1;
            vowels[i] = vowels[i - 1];
        }
    }
    int count = 0;
    int total_consonants = consonants[n - 1];
    int total_vowels = vowels[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            count = (count + (total_consonants - consonants[i])) % 1000000007;
        }
        else
        {
            count = (count + (total_vowels - vowels[i])) % 1000000007;
        }
    }
    return count;
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
        solveA("inttnikjmjbemrberk");
    }

    return 0;
}
