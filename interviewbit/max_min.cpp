
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

int solve(vector<int> A)
{
    int minAns,maxAns;
    int n = A.size();
    if(n%2==0){
        if(A[0]>A[1]){
            minAns = A[0];
            maxAns = A[1];
        }
        else{
            minAns = A[1];
            maxAns = A[0];
        }
    }
    else minAns = maxAns = A[0];
    int x = (A.size()%2==0)?2:1;
    for(int i = x;i<n-1;i+=2){
        if(A[i]>A[i+1]){
            if(A[i]>maxAns)maxAns=A[i];
            if(A[i+1]<minAns)minAns = A[i+1];
        }
        else{
            if(A[i]<minAns)minAns=A[i];
            if(A[i+1]>maxAns)maxAns = A[i+1];
        }
    }
    return minAns+maxAns;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve({-79, 63, 6, -82, 62});

    return 0;
}