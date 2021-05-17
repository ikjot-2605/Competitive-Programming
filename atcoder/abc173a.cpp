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

#define along long(x) x.begin(), x.end()
#define MOD 998244353
const unsigned long long M = 1000000007;
const long double PI = 3.141592653589793236L;

typedef long long ll;
typedef long double ld;
#define MAX 50
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll arr[n];
    vector<int>numbers;
    for(int i=0;i<n;i++){
        int dum;
        cin>>dum;
        numbers.push_back(dum);
    }
    sort(numbers.begin(),numbers.end());
    int postaken=0;
    int negtaken=0;
    int pos=0;
    int neg=0;
    int lastpos=-1;
    int negindex=0;
    int posindex=0;
    int lastneg=1;
    vector<int> multiply;
    while(k>0){
        if(numbers[numbers.size()-1]>abs(numbers[0])){
            postaken=1;
            negtaken=0;
            pos++;
            lastpos=numbers[numbers.size()-1];
            multiply.push_back(numbers[numbers.size()-1]);
            posindex=multiply.size()-1;
            k--;
            numbers.pop_back();
        }
        else{
            neg++;
            negtaken=1;
            postaken=0;
            lastneg=abs(numbers[0]);
            multiply.push_back(abs(numbers[0]));
            negindex=multiply.size()-1;
            numbers.erase(numbers.begin());
            k--;
        }
    }
    ll todivide=1;
    ll tomultiply=1;
    if(neg%2==1){
        if(lastneg*numbers[0]>lastpos*numbers[numbers.size()-1]&&lastpos>0){
            todivide=lastpos;
            tomultiply=abs(numbers[0]);
        }
        else{
            todivide=lastneg;
            tomultiply=numbers[numbers.size()-1];
        }
    }
    ll ans=1;
    for(int i=0;i<multiply.size();i++){
        if(multiply[i])ans=(ans*multiply[i])%M;
    }
    ans=(ans*tomultiply)%M;
    ans=(ans/todivide)%M;
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
}
