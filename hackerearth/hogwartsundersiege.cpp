
/*COMPETITIVE PROGRAMMING C++ TEMPLATE */

#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include<bitset>
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
unsigned int toggleBitsFromLToR(unsigned int n, 
                                unsigned int l, unsigned int r) 
{ 
    // calculating a number 'num' having 'r' 
    // number of bits and bits in the range l 
    // to r are the only set bits 
    int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1); 
  
    // toggle bits in the range l to r in 'n' 
    // and return the number 
//Besides this, we can calculate num as: num=(1<<r)-l . 
    return (n ^ num); 
} 
void solve()
{
   string s;
   cin>>s;
   int q;
   cin>>q;
   int num=stoi(s,0,2);
   for(int i=0;i<q;i++){
       int l,r,type;
       cin>>l>>r>>type;
       if(type==0){
           num=toggleBitsFromLToR(num,l,r);
       }
       else{
           num=toggleBitsFromLToR(num,0,l-1);
           num=toggleBitsFromLToR(num,r+1,s.size()-1); 
       }
   }
   string binary=bitset<8>(num).to_string();
   cout<<binary<<endl;
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