
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
   int arr[n];
   int maxi=0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       maxi=max(maxi,arr[i]);
   }
   string s;
   for(int i=0;i<maxi;i++){
       s.push_back('a');
   }
   if(s.length()==0){
       s="a";
   }
   vector<string> ans;
   for(int i=0;i<n+1;i++){
   ans.push_back(s);
   }
   for(int i=0;i<n;i++){
       int num=arr[i];
       if(ans[i+1][num]!='z')ans[i+1][num]++;
       else ans[i+1][num]='a';
       if(i+2<=n)ans[i+2]=ans[i+1];
   }
   for(int i=0;i<n+1;i++){
       cout<<ans[i]<<endl;
   }
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