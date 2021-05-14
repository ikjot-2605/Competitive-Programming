
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

string solve(vector<string> A)
{
    string curr = "";
    for(int i =0 ;i<A[0].length();i++){
        char temp = A[0][i];
        for(int j = 0;j<A.size();j++){
            if(A[j][i]!=temp){
                return curr;
            }
        }
        curr.push_back(temp);
    }
    return curr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve({"ABCD"})<<endl;
    cout<<solve({"abcdefgh", "aefghijk", "abcefgh"});

    return 0;
}