
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
    int x,y,z;
    cin>>x>>y>>z;
    if(x!=y&&y!=z&&z!=x){
        cout<<"NO\n";
    }
    else if(x==y&&y==z&&z==x){
        cout<<"YES\n";
        cout<<x<<" "<<x<<" "<<x<<"\n";
    }
    else{
        if(x==y){
            if(z<x){
                cout<<"YES\n";
                cout<<x<<" "<<z<<" "<<z<<endl;
            }
            else{
                cout<<"NO\n";
            }
        }
        else if(y==z){
            if(x<z){
                cout<<"YES\n";
                cout<<y<<" "<<x<<" "<<x<<endl;
            }
            else{
                cout<<"NO\n";
            }
        }
        else if(z==x){
            if(y<z){
                cout<<"YES\n";
                cout<<x<<" "<<y<<" "<<y<<endl;
            }
            else{
                cout<<"NO\n";
            }
        }
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