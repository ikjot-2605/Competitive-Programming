
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

vector<vector<int>> solve(int A)
{
   vector<vector<int>> ans;
   for(int i=0;i<A;i++){
       vector<int> curr_row;
       for(int j=A;j>A-i;j--){
           curr_row.push_back(j);
       }
       for(int j=0;j<2*(A-i)-1;j++){
           curr_row.push_back(A-i);
       }
       for(int j=A-i+1;j<=A;j++){
           curr_row.push_back(j);
       }
    ans.push_back(curr_row);
   }
   for(int i=A-2;i>=0;i--){
       ans.push_back(ans[i]);
   }

   return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        vector<vector<int>> answer=solve(3);
        for(int i=0;i<answer.size();i++){
            for(int j=0;j<answer[i].size();j++){
                cout<<answer[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}