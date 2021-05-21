
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

int solveA(vector<int> A)
{
    int temp = A.size();
    for(int i =0;i<temp;i++){
        if(A[i]<1){A.erase(A.begin()+i);
        i--;
        temp--;}
    }
    for(int i =0;i<temp;i++){
        if(abs(A[i])-1<=temp-1)A[abs(A[i])-1]*=-1;
    }
    for(int i =0 ;i<temp;i++){
        if(A[i]>0)return i+1;
    }
    return temp+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        cout<<solveA({1,2,3});
    }

    return 0;
}
