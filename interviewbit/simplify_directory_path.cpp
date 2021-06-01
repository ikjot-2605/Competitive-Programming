

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
//TODO
string solve(string A)
{
    stack<string> s;
    int n = A.length();
    string curr = "";
    for (int i = 0; i < n; i++)
    {

        if (A[i] == '/')
        {
            if (curr == "..")
            {
                if (!s.empty())
                    s.pop();
            }
            else if (curr == ".")
            {
            }
            else if (curr == "")
            {
            }
            else
            {
                s.push(curr);
                curr = "";
            }
            curr = "";
        }
        else
        {
            curr.push_back(A[i]);
        }
    }
    if (curr == "..")
    {
        if (!s.empty())
            s.pop();
    }
    else if (curr == ".")
    {
    }
    else if (curr == "")
    {
    }
    else
    {
        s.push(curr);
        curr = "";
    }
    stack<string> temp;
    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }
    string ans = "/";
    while (!temp.empty())
    {
        ans.append(temp.top());

        temp.pop();
        if (!temp.empty())
            ans.push_back('/');
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << solve("/a/./b/../../c/");
    return 0;
}