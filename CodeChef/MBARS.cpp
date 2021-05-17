
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
long getWays(int l,int n, vector<int> S,int m) {
    
    int i, j, x, y; 
  
    int table[n + 1][m]; 
    
    for (i = 0; i < m; i++) 
        table[0][i] = 1; 
  
   
    for (i = 1; i < n + 1; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            
            x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0; 
  
            y = (j >= 1) ? table[i][j - 1] : 0; 
  
            table[i][j] = x + y; 
        } 
    } 
    int count=0;
    for(int i=l;i<=n;i++){
        count+=table[i][m-1];
    }
    return count;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    //cin >> T;
    while (T--)
    {   
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int dum;
            cin>>dum;
            arr.push_back(dum);
        }
        int l,h;
        cin>>l>>h;
        cout<<getWays(l,h,arr,arr.size())<<endl;
    }

    return 0;
}
