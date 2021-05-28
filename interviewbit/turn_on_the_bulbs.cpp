#include <bits/stdc++.h>
using namespace std;

int solve(int A)
{
    map<int, int> vals;
    vals[1] = 1;
    vals[2] = 2;
    vals[3] = 2;
    vals[4] = 2;
    vals[5] = 2;
    vals[6] = 2;
    int ans;
    if (A == 1)
        return 1;
    if (A == 2)
        return 2;
    if (A == 3)
        return 2;
    if (A == 4)
        return 2;
    if (A == 5)
        return 2;
    if (A == 6)
        return 2;
    if (A == 7)
        return 3;
    if (A == 8)
        return 4;
    else
    {
        ans = 0;
        ans = 2 * (A / 6);
        ans += vals[A - A / 6];
    }
    return ans;
}
int main()
{
    cout << solve(3);
    // vector<int> ans = solve({-10, -10, -10}, -5);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
}