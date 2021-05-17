
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

vector<int> solve(string A)
{
    int n = A.length();
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        if(A[i]=='1')arr[i]=-1;
        else arr[i]=1;
    }
    int max_so_far = 0;
    int max_ending_here = 0;
    int L = 0,R=-1;
    int newL = 0;
    for(int i =0;i<n;i++){
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here<0){max_ending_here=0;newL=i+1;}
        if(max_so_far<max_ending_here){max_so_far = max_ending_here;R=i;if(R>=newL)L=newL;}
    }
    if(L==-1||R==-1){return {};}
    return {L+1,R+1};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //vector<string> demo={"0.6","0.7","0.8"};
    int T = 1;
    cin >> T;
    while (T--)
    {
        vector<int> ans = solve("1101");
        for(int i =0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
    }

    return 0;
}