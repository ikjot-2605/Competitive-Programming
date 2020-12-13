
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
   string a1;
   string a2;
   cin>>a1>>a2;
   a1+="0";
   a2+="0";
   vector<int> indices;
   for(int i=0;i<n;i++){
       if(a1[i]!=a1[i+1]){
           indices.push_back(i+1);
       }
   }
   for(int i=n-1;i>=0;i--){
       if(a2[i]!=a2[i+1]){
           indices.push_back(i+1);
       }
   }
   cout<<indices.size()<<" ";
   for(int i=0;i<indices.size();i++){
       cout<<indices[i]<<" ";
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