#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> &A, int B, int thresold)
{
    int n = A.size();
    int k = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        pages += A[i];
        if (pages > thresold)
        {
            pages = 0;
            k += 1;
            i -= 1;
            if (k > B)
            {
                return false;
            }
        }
    }
    return true;
}

int books(vector<int> &A, int B)
{
    if (B > A.size())
        return -1;
    int l = 0, r = 0, ans = -1, n = A.size();
    for (int i = 0; i < A.size(); i++)
        r += A[i];

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (possible(A, B, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
bool solve(int A)
{
    set<int> already;
    string s = to_string(A);
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string temp = s.substr(i, j - i + 1);
            int mul = 1;
            for (int k = 0; k < temp.length(); k++)
            {
                mul *= (temp[k] - 48);
            }
            if (already.find(mul) == already.end())
            {
                already.insert(mul);
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n = 123;
    cout << solve(n) << endl;
}