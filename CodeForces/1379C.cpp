
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
struct ab{
    int a;
    int b;
};
bool checking(ab a1,ab a2){
    return a1.a>a2.a;
}
void solve()
{
   int n,m;
   cin>>n>>m;
   int a[m],b[m];
   for(int i=0;i<m;i++){
       cin>>a[i]>>b[i];
   }
   struct ab arr[m]; 
   for(int i=0;i<m;i++){
       arr[i].a=a[i];
       arr[i].b=b[i];
   }
   sort(arr,arr+m,checking);
   
   int max=INT_MIN;
   int parent=0;
   for(int i=0;i<m;i++){
       if(max<b[i]){max=b[i];parent=a[i];}
   }
   ll count=0;
   ll done=0;
   for(int i=0;i<m&&done<n;i++){
       if(arr[i].a>max){
           count+=arr[i].a;
            done++;
       }
   }
    if(done<n){
        done++;
        count+=parent;
        if(done<n){
            count+=(n-done)*max;
        }
        if(parent>max){
        count+=max;
        count-=parent;
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