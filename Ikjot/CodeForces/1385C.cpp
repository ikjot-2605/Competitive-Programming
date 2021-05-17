
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int inc=0;
    int dec=0;
    int removal=0;
    for(int i=n-1;i>=0;i--){
        if(i==0){removal=0;break;}
        if(arr[i-1]>=arr[i]&&inc==0&&dec==0){

        }
        else if(inc==0&&dec==0&&arr[i-1]<arr[i]){
            inc=0;
            dec=1;
        }
        else if(dec==1&&arr[i-1]>arr[i]){
            removal=i;
            break;
        }
    }
    cout<<removal<<"\n";
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