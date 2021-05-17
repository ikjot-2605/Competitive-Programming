
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
 bool vis[50005];
    bool canReach(vector<int>& arr, int start) 
    {
        if(arr[start] == 0) return true;
        
        int n = arr.size();
        for(int i=0; i<n ; i++) vis[i] = false;
        
        return dfs(arr , start);
    }
    
    bool dfs(vector<int> &arr , int index)
    {
        if(index < 0 || index >= arr.size() || vis[index]) return false;
        
        vis[index] = true;
        if(arr[index] == 0)
            return true;
        
        bool left = dfs(arr , index - arr[index]);
        bool right = dfs(arr , index + arr[index]);
        
        
        return right || left;
        
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    vector<int> arr={4,2,3,0,3,1,2};
    int start=5;
    while (T--)
    {
        canReach(arr,start);
    }

    return 0;
}