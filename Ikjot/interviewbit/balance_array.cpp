
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
    int oddc=0;
    int count=0;
    int evenc=0;
    int odd=0;
    int even=1;
    for(int i=0;i<A.size();i++){
        oddc=0;
        evenc=0;
        odd=0;
        even=1;
        for(int j=0;j<A.size();j++){
            if(j==i){continue;}
            else{
                if(even==1)evenc+=A[j];
                else{oddc+=A[j];}
                if(even==0){even=1;odd=0;}
                else{even=0;odd=1;}
                
            }
        }
        if(oddc==evenc){count++;}
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a={5, 5, 2, 5, 8};
    int T = 1;
    //cin >> T;
    while (T--)
    {
       cout<< solve(a);
    }

    return 0;
}