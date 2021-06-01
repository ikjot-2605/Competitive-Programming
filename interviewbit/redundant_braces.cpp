

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
bool solve(string A)
{
    int n = A.length();
    int consecutive_opening = 0;
    int prev_opening = INT_MIN;
    int prev_closing = INT_MIN;
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == ')')
        {
            char temp = s.top();
            s.pop();
            bool flag = true;

            while (!s.empty() and temp != '(')
            {

                if (temp == '+' || temp == '-' ||
                    temp == '*' || temp == '/')
                    flag = false;

                temp = s.top();
                s.pop();
            }
            if (flag == true)
                return true;
        }
        else
            s.push(A[i]);
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << solve("((a+b))");
    return 0;
}