

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
   string s;cin>>s;
    int ml=2;
    int temp=0;
    for(char ch='0';ch<='9';ch++){
    	for(char c='0';c<='9';c++){
    		int f=0;temp=0;
    		for(int i=0;i<s.length();i++){
    			if(f==0 && s[i]==ch){
    				temp++;f=1;
				}
				else if(f==1 && s[i]==c){
					temp++;f=0;
				}
				
			}
			if(temp%2==1 && ch!=c) temp--;
			ml=max(ml,temp);
		}
	}
	cout<<s.length()-ml<<"\n";
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