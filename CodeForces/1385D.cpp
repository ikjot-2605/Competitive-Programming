
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

int solve(string s,int n,char to_check,int sum)
{
    if(n==1&&s[0]==to_check)return sum+0;
    else if(n==1&&s[0]!=to_check){return sum+1;}
    else{
        int a=solve(s.substr(0,n/2),n/2,to_check+1,sum);
        int b=solve(s.substr(n/2,n/2),n/2,to_check+1,sum);
        int firstcount=0;
        int secondcount=0;
        for(int i=0;i<n/2;i++){
            if(s[i]!=to_check){
                firstcount++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(s[i]!=to_check){
                secondcount++;
            }
        }
        if(firstcount+b<secondcount+a){
            sum+=firstcount+b;
        }
        else{
            sum+=secondcount+a;
        }
        return sum;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    vector<int> ans;
    while (T--)
    {
        
        int n;
        cin>>n;
        string s;
        cin>>s;
        char to_check='a';
        ans.push_back(solve(s,n,to_check,0));
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}