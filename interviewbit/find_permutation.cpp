
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

vector<int> solveA(string A,int B){
    vector<int> res;
    int max = B;
    int min =1;
    for(int i=B-2 ; i>=0  ; i--){
        if(A[i] == 'I'){
            res.push_back(max);
            max--;
        }
        else{
            res.push_back(min);
            min++;
        }
    }
    res.push_back(max);
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solveA({},1);
    }

    return 0;
}
