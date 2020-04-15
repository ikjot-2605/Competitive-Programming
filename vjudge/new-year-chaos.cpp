#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include<stack>
#include<queue>

#define ll long long int
#define all(x) x.begin(), x.end()
#define MOD 1000000007


using namespace std;
void solve()
{

    int q[1000007],pos[1000007];
        int n;
        cin >> n;
        for(int q_i = 1;q_i <= n;q_i++){
            cin >> q[q_i];
            pos[q[q_i]] = q_i;
        }

        int ans = 0;
        bool valid = true;

        for (int i=n ; i>=1 && valid; i--) {
            int x = pos[i];
            if (abs(x - i) > 2) valid = false;
            if (valid) {
                while (x != i) {
                    swap(q[x],q[x+1]);
                    swap(pos[q[x]],pos[q[x+1]]);
                    x++;
                    ans++;
                }
            }
        }

        if (!valid) printf("Too chaotic\n"); else printf("%d\n",ans);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}