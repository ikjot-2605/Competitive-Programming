
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
    string a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            cout<<"-1\n";return;
        }
    }
    vector<set<int>> graph(20);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(graph[b[i]-97].find(a[i]-97)==graph[b[i]-97].end()){
                graph[b[i]-97].insert(a[i]-97);
            }
        }
    }
    int count=0;
    for(int i=0;i<20;i++){
        count+=graph[i].size();
        set<int>::iterator it;
        for(int j=i+1;j<20;j++){
            it=graph[j].find(i);
            graph[j].erase(it);
            graph[j].insert();
        }
    }
    cout<<count<<endl;
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