
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

vector<int> maxset(vector<int> A) {
    int l=-1,r=-1;
    for(int i =0;i<A.size();i++){
        if(A[i]>=0){l=i;r=i;break;}
    }
    int curr_max = INT_MIN;
    int curr = 0;
    int newl = l;
    for(int i =0;i<A.size();i++){
        if(A[i]>=0){
            curr+=A[i];
            if(curr>curr_max){curr_max = curr;r=i;l=newl;}
        }
        else{
            curr=0;
            newl = i+1;
            
        }
    }
    vector<int> ans;
    for(int i = l;i<=r;i++){
        ans.push_back(A[i]);
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
       vector<int> a = maxset({1, 2, 5, -7, 2, 5 });    
    }

    return 0;
}

