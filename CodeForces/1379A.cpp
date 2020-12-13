
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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int pos = 0;
    int index;
    int ind = s.find("abacaba");
    while (ind != string::npos)
    {
        if (count == 0)
            count++;
        else
        {
            count = 2;
            break;
        }
        ind = s.find("abacaba", ind + 1);
    }
    string tocheck = "abacaba";
    if (count == 1)
    {
        while ((pos = s.find("?")) != std::string::npos)
        {
            s.replace(pos, 1, "z");
        }
        cout << "YES\n";
        cout << s << "\n";
        return;
    }
    else if (count > 1)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        string tocheck = "abacaba";
        for (int i = 0; i <= n - 7; i++)
        {
            string a = s.substr(i, 7);
            bool useless = 0;
            for (int j = 0; j < 7; j++)
            {
                if (a[j] != tocheck[j] && a[j] != '?')
                {
                    useless = 1;
                }
            }
            if (useless == 0)
            {
                s[i] = 'a';
                s[i + 1] = 'b';
                s[i + 2] = 'a';
                s[i + 3] = 'c';
                s[i + 4] = 'a';
                s[i + 5] = 'b';
                s[i + 6] = 'a';
                pos = 0;
                while ((pos = s.find("?")) != std::string::npos)
                {
                    s.replace(pos, 1, "z");
                }
                cout << "YES\n";
                cout << s << "\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}