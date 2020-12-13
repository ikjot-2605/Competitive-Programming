
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

vector<int> solve()
{
   vector<int> arr = {1,2,3,2,4,6};
   int break_index;
   for(int i =0;i<arr.size()-1;i++){
       if(arr[i+1]<arr[i]){break_index=i;break;}
   }
   int start1=0;
   int start2 = break_index+1;
   vector<int> result;
   while(start1<break_index||start2<arr.size()){
       if(arr[start1]<arr[start2]){
           result.push_back(arr[start1++]);
       }
       else{
           result.push_back(arr[start1++]);
       }
   }
   return result;
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