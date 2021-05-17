
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
struct books {                    
    ll time;        
    ll a;
    ll b;
};
bool sorter(books b1,books b2){
    return b1.time<b2.time;
}
void solve()
{
    
    ll n,k;
    cin>>n>>k;
    vector<books> arr;
    for(ll i=0;i<n;i++){
        ll t,a,b;
        cin>>t>>a>>b;
        arr.push_back(books());
        arr[i].a=a;
        arr[i].b=b;
        arr[i].time=t;
    }
    sort(arr.begin(),arr.end(),sorter);
    ll t=0;
    ll counta=0;
    ll countb=0;
    // get all common ones
    bool chosen[n];
    for(ll i=0;i<n;i++){
        chosen[i]=false;
    }
    for(ll i=0;i<k;i++){
        if(arr[i].a==arr[i].b&&arr[i].a==1&&counta<k&&countb<k){
            chosen[i]=1;
            t+=arr[i].time;
            counta++;
            countb++;
        }
    }
    if(counta==k){
        cout<<t<<endl;
        return;
    }
    vector<ll> aindices;
    vector<ll> bindices;
    vector<ll> commonindices;
    for(ll i=0;i<n;i++){
        if(arr[i].a==1&&arr[i].b==0&&!chosen[i])aindices.push_back(i);
        if(arr[i].a==1&&arr[i].b==1&&!chosen[i])commonindices.push_back(i);
        if(arr[i].a==0&&arr[i].b==1&&!chosen[i])bindices.push_back(i);
    }
    if((k-counta>aindices.size()+commonindices.size())||(k-countb>bindices.size()+commonindices.size())){cout<<"-1\n";return;}
    while(counta<k&&countb<k){
        if(aindices.size()&&bindices.size()&&commonindices.size()&&arr[aindices[0]].time+arr[bindices[0]].time<arr[commonindices[0]].time){
            t+=arr[aindices[0]].time+arr[bindices[0]].time;
            aindices.erase(aindices.begin());
            bindices.erase(bindices.begin());
            counta++;
            countb++;
        }
        else if(aindices.size()==0||bindices.size()==0){
            while(commonindices.size()){
                t+=arr[commonindices[0]].time;
                commonindices.erase(commonindices.begin());
                counta++;
                countb++;
            }
            break;
        }
        else if(commonindices.size()==0){
            while(aindices.size()&&bindices.size()){
                t+=arr[aindices[0]].time+arr[bindices[0]].time;
                aindices.erase(aindices.begin());
                bindices.erase(bindices.begin());
                counta++;
                countb++;
            }
            break;
        }
        else{
            t+=arr[commonindices[0]].time;
            commonindices.erase(commonindices.begin());
            counta++;
            countb++;
        }
    }
    if(counta>=k&&countb>=k){cout<<t<<endl;}
    else cout<<"-1\n"<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
