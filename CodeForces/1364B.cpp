
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

void solve()
{
    int n;
    cin>>n;
    vector<int> p(n,0);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int count=0;
    for(int i=0;i<p.size()-2;i++){
        if(p[i+2]>=p[i+1]&&p[i+1]>=p[i]){
            p.erase(p.begin()+i+1);
            i--;
        }
        else if(p[i+2]<=p[i+1]&&p[i+1]<=p[i]){
            p.erase(p.begin()+i+1);
            i--;
        }
    }
    cout<<p.size()<<endl;
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}