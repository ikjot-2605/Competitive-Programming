
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
    int odd=0;
    int even=0;
    int arr[n];
    if(n%4!=0){
        cout<<"NO\n";
        return;
    }
    else{
        for(int i=0;i<n/2;i++){
            arr[i]=4*i+1;
        }
        for(int i=n/2;i<n;i++){
            if(i%2==0)arr[i]=arr[i-n/2]+1;
            else arr[i]=arr[i-n/2]-1;
        }
    }
    cout<<"YES\n";
    for(int i=n/2;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n/2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
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