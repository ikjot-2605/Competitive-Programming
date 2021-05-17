
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
   int n,m;
   cin>>n>>m;
   int arr[n];
   map<int,int> check;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       if(check.find(arr[i])==check.end()){
           check.insert(pair<int, int>(arr[i],1));
       }
       else{
           check[arr[i]]++;
       }
   } 
   int count=0;
   map<int, int>::iterator it = check.begin();
   int prev=0;
   while(it!=check.end()){
       if(it->first<m&&it->first==prev+1){
           count+=it->second;
       }
       else if(it->first>m){
           count+=it->second;
       }
       else if(it->first<m&&it->first!=prev+1){
           cout<<"-1\n";
           return; 
       }
       it++;
       prev++;
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