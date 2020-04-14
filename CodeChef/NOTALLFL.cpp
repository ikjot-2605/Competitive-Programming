#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> ar(k + 10, 0);
        bool valid = true;
        queue<ll> q;
        ll count = 0;
        ll maxlen = 0;
        for (int x = 0; x < n; x++)
        {
            ll a;
            cin >> a;
            q.push(a);
            if (ar[a] == 0)
            {
                count++;
            }
            ar[a]++;
            if (count == k)
            {
                while (!q.empty() && count == k)
                {
                    ar[q.front()]--;
                    if (ar[q.front()] == 0)
                    {
                        count--;
                    }
                    q.pop();
                }
            }
            if (q.size() > maxlen)
            {
                maxlen = q.size();
            }
        }
        cout << maxlen << endl;
    }
}
