
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
   priority_queue<int> pq;
   int n;
   cin>>n;
   for(int i =0;i<n;i++){
       int a;
       cin>>a;
       pq.push(a);
   } 
   vector<int> ans;
   vector<int> finalans;
   int prev =0;
   for(int i =0;i<n;i++){
       int a = (pq.top());
       pq.pop();
       ans.push_back(a-prev);
       prev = a;
   }
   for(int i =0;i<n;i++){
       cout<<ans[i]<<" ";
   }
   cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}