
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

string answer;

void solve()
{
    string s;
    cin >> s;
    set<int> start;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]&&s[i+1]==s[i+2]){
            start.insert(i);
        }
    }
    set<int>::iterator it=start.begin();
    while(it!=start.end()){
        
        it++;
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
        answer="";
        string s;
        cin>>s;
        //convert(s);
        cout<<answer<<endl;
    }

    return 0;
}