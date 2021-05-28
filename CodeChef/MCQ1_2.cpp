
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

void solveA()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> res(n, 1);
    if (arr[0] > arr[1])
        res[0] = 2;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] <= arr[i - 1] && arr[i] <= arr[i + 1])
        {
            res[i] = 1;
        }
        else if (arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1])
        {
            res[i] = res[i - 1] + 1;
        }
        else if (arr[i] <= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            res[i] = res[i + 1] + 1;
        }
        else if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            res[i] = max(res[i - 1], res[i + 1]) + 1;
        }
    }
    if (arr[n - 1] > arr[n - 2])
    {
        res[n - 1] = res[n - 2] + 1;
    }
    else
    {
        res[n - 1] = 1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += res[i];
    }
    cout << sum << endl;
}
bool util(int currIndex, vector<int> heights, int remainingUnitBlocks, stack<int> recentlyCut)
{
    if (currIndex == heights.size() - 1)
    {
        return true;
    }
    if (heights[currIndex] > heights[currIndex + 1])
    {
        recentlyCut.push(heights[currIndex] - heights[currIndex + 1]);
        return util(currIndex + 1, heights, remainingUnitBlocks, recentlyCut);
    }
    else if (heights[currIndex] < heights[currIndex + 1])
    {
        //add only green blocks
        if (heights[currIndex + 1] - heights[currIndex] <= remainingUnitBlocks)
        {
            return util(currIndex + 1, heights, remainingUnitBlocks - (heights[currIndex + 1] - heights[currIndex]), recentlyCut);
        }
        //add last cut
        if (!recentlyCut.empty() && heights[currIndex + 1] - heights[currIndex] <= recentlyCut.top())
        {
            int temp = recentlyCut.top();
            recentlyCut.pop();
            int t = temp - (heights[currIndex + 1] - heights[currIndex]);
            if (t > 0)
                recentlyCut.push(t);
            return util(currIndex + 1, heights, remainingUnitBlocks, recentlyCut);
        }
        else if (!recentlyCut.empty())
        {
            int toAdd = recentlyCut.top() - heights[currIndex + 1] + heights[currIndex];
            return util(currIndex + 1, heights, remainingUnitBlocks - toAdd, recentlyCut);
        }
    }
    else
    {
        return util(currIndex + 1, heights, remainingUnitBlocks, recentlyCut);
    }
    return false;
}
void solveB()
{
    int n, m;
    cin >> n >> m;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    if (util(0, heights, m, stack<int>()))
        cout << "YES\n";
    else
        cout << "NO\n";
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
    //cin >> T;
    while (T--)
    {
        solveB();
    }

    return 0;
}
