
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

void solveA()
{
   string s;
   cin>>s;
   int n = s.length();
   if(n%2==1){
       cout<<"NO"<<endl;
       return;
   }
   if(s[0]==')'||s[n-1]=='('){
       cout<<"NO"<<endl;
       return;
   }
   cout<<"YES"<<endl;
   return;
}
void solveB(){
    int n,m;
    cin >> n;
    int max1 = 0;
    int max2 = 0;
    int curr= 0;
    vector<int> r(n);
    for(int i = 0;i<n;i++){
        cin>>r[i];
        curr+=r[i];
        max1= max(max1,curr);
    }
    curr=0;
    cin>>m;
    vector<int> b(m);
    for(int i = 0;i<m;i++){
        cin>>b[i];
        curr+=b[i];
        max2= max(max2,curr);
    }
    cout<<max1+max2<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solveB();
    }

    return 0;
}