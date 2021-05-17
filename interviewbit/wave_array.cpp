
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

vector<int> solveA(vector<int> A){
	sort(A.begin(),A.end());
    int n  = A.size();
    for(int i =0 ;i<n&&i+1<n;i+=2){
        int temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp; 
    }
    return A;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        vector<int> ans  = solveA({1,2,3,4});
        for(int i =0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }

    return 0;
}
