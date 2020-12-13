 
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
   int l,r,m;
   cin>>l>>r>>m;
   int a=-1,b=-1,c=-1;
   
   if(m>=l&&m<=r){
       a=m;
       b=l;
       c=l;
   }
   else if(m>r){
       int min_rem=INT_MAX;
       int divisor=0;
       int doof=0;
       for(int i=l;i<=r;i++){
           if(m%i==0){
               a=i;
               b=l;
               c=l;
           }
           if(min_rem>m%i){
               min_rem=m%i;
               divisor=i;
               doof=0;
           }
           if(min_rem>i-m%i){
               min_rem=i-m%i;
               divisor=i;
               doof=1;
           }
       }
       if(min_rem==0){
 
       }
       else {
           if(doof==0){
               a=divisor;
               b=r;
               c=r-min_rem;
           }
           else{
               a=divisor;
               b=l;
               c=l+min_rem;
           }
       }
   }
   else if(m<l){
       a=l;
       b=l;
       c=2*l-m;
   }
   cout<<a<<" "<<b<<" "<<c<<endl;
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