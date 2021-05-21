
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

vector<string> solveA(int A){
	vector<string> ans(A,"");
    for(int i =0;i<A;i++){
        if((i+1)%3==0){
            ans[i]="Fizz";
        }
        if((i+1)%5==0){
            ans[i].append("Buzz");
        }
        if((i+1)%3&&(i+1)%5){
            ans[i].append(to_string(i+1));
        }
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
        vector<string> ans =solveA(15);
        for(int i =0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
    }

    return 0;
}
