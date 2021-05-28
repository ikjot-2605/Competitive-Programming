#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> A)
{
    int n = A.size();
    map<int, int> sum_index;
    vector<int> pref(n + 1, 0);
    pref[0] = 0;
    sum_index[0] = 0;
    int max_length = 0;
    int l = -1, r = -1;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + A[i - 1];
        if (sum_index.find(pref[i]) != sum_index.end())
        {
            if (i - sum_index[pref[i]] > max_length)
            {
                l = sum_index[pref[i]];
                r = i - 1;
                max_length = i - sum_index[pref[i]];
            }
        }
        else
        {
            sum_index[pref[i]] = i;
        }
    }
    vector<int> ans;
    if (l != -1 && r != -1)
    {
        for (int i = l; i <= r; i++)
        {
            ans.push_back(A[i]);
        }
        return ans;
    }
    else
        return {};
}
int main()
{
    vector<int> ans = solve({0, 2, 3, 4, 4});
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}