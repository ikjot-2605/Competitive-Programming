

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
using namespace std;
typedef long long int ll;
typedef long double ld;
#define MAX 50

int solve(vector<int> A, vector<int> B)
{
    int start = 0;
    int end = 1;

    int curr_petrol = A[start] - B[start];
    int n = A.size();

    while (end != start || curr_petrol < 0)
    {

        while (curr_petrol < 0 && start != end)
        {

            curr_petrol -= A[start] - B[start];
            start = (start + 1) % n;

            if (start == 0)
                return -1;
        }

        curr_petrol += A[end] - B[end];

        end = (end + 1) % n;
    }

    return start;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << solve({1, 2}, {2, 1});

    return 0;
}