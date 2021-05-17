
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

vector<int> solve(vector<int> A)
{
    int n  = A.size();
    vector<int> B(n);
    for(int i = 0;i<n;i++){
        B[i] = 1;
    }
    ll sum = 0;
    for(int i =0 ;i<A.size();i++){
        B[A[i]-1]--;
    }
    int a,b;
    for(int i = 0;i<n;i++){
        if(B[i]==1)b=i+1;
        if(B[i]==-1)a=i+1;
    }
    return {a,b};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //vector<string> demo={"0.6","0.7","0.8"};
    cout<<solve({3,1,2,5,3})[0]<<solve({3,1,2,5,3})[1]<<endl;
    return 0;
}