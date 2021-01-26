
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
     int n,m;
     cin>>n>>m;;
     int x[n],u[n],y[m],v[m];
     for(int i =0;i<n;i++){
       cin>>x[i]>>u[i];
     }
     for(int i =0;i<m;i++){
       cin>>y[i]>>v[i];
     }
     map<int,int> xs;
     map<int,int> ys;
     for(int i =0;i<n;i++){
       xs[x[i]*u[i]]++;
     }
     for(int i =0;i<m;i++){
        ys[y[i]*v[i]]++;
     }
     int count = 0;
     for(auto it= xs.begin();it!=xs.end();it++){
        if(ys.find(it->first)!=ys.end()){
          int tt =  min(ys[it->first],xs[it->first]);
          count+= tt;
          ys[it->first]-=tt;
          xs[it->first]-=tt;
        }
     }
     cout<<count<<endl; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}
