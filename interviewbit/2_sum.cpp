#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> A, int B)
{
    int n = A.size();
    map<int, int> store;
    for (int i = 0; i < n; i++)
    {
        if (store.find(B - A[i]) == store.end())
        {
            if (store.find(A[i]) == store.end())
                store[A[i]] = i;
        }
        else
        {
            return {store[B - A[i]] + 1, i + 1};
        }
    }
    return {};
}
int main()
{
    vector<int> ans = solve({-10, -10, -10}, -5);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}