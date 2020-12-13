
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
    int n,q;
    cin>>n>>q;
    int stones[n];
    for(int i=0;i<n;i++){
        cin>>stones[i];
    }
    for(int i=0;i<q;i++){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int minh=INT_MAX;
        int minr=INT_MAX;
        if(r1<l2){
            for(int i=l1-1;i<=r1-1;i++){
                if(minh>stones[i])minh=stones[i];
            }
            for(int i=l2-1;i<=r2-1;i++){
                if(minr>stones[i])minr=stones[i];
            }
            if(minh<minr){
                cout<<"Ron\n";continue;
            }
            else if(minh==minr){
                cout<<"Ron\n";continue;
            }
            else{
                cout<<"Harry\n";continue;
            }
        }
        else if(l1==l2&&r1==r2){
            cout<<"Harry\n";continue;
        }
        else{
            for(int i=l1-1;i<r1-1;i++){
                if(minh>stones[i])minh=stones[i];
            }
            for(int i=l2-1;i<r2-1;i++){
                if(minr>stones[i])minr=stones[i];
            }
            set<int> common;
            for(int i=l2-1;i<=r1-1;i++){
                common.insert(stones[i]);
            }
            if(common.find(minh)==common.end()&&common.find(minr)==common.end()){
                if(minh<minr){
                cout<<"Ron\n";continue;
            }
            else if(minh==minr){
                cout<<"Ron\n";continue;
            }
            else{
                cout<<"Harry\n";continue;
            }
            }
            else{
                if(common.find(minh)!=common.end()){
                    cout<<"Harry\n";continue;
                }
                else if(common.find(minr)!=common.end()){
                    cout<<"Ron\n";continue;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}