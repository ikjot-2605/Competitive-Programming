
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
    int n,x;
    cin>>n>>x;
    int count=0;
    int arr[n];
    int sum=0;
    int small_index=n-1;
    int big_index=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%x==0)count++;
        if(arr[i]%x!=0){if(i<small_index)small_index=i;if(i>big_index)big_index=i;}
        sum+=arr[i];
    }
    if(sum%x==0){
        if(count==n){
            cout<<"-1"<<endl;
        }
        else{
            if(small_index+1<n-big_index){
                cout<<n-small_index-1<<endl;
            }
            else{
                cout<<big_index<<endl;
            }
        }
    }
    else{
        cout<<n<<endl;
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