
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
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int control=1;
   int found=0;
   for(int i=0;i<n;i++){
       if(a[i]==1&&control==1){
           control=2;
           
       }
       else if(a[i]==1&&control==2){
           control=1;
           
       }
       else{break;}    
   }
   if(control==1){
       cout<<"FIRST\n";
   }
   else{
       cout<<"SECOND\n";
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