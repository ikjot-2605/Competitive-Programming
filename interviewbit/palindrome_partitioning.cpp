
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
vector<vector<string>> solution;
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}
void helper(vector<string> currPart,int start,int n,string A){
    if(start>=n){solution.push_back(currPart);return;}
    for(int i = start;i<n;i++){
        if(isPalindrome(A.substr(start,i-start+1))){
            currPart.push_back(A.substr(start,i-start+1));
            helper(currPart,i+1,n,A);
            currPart.pop_back();
        }
    }

}
vector<vector<string>> solveA(string A){
    solution.clear();
    helper({},0,A.length(),A);
    return solution;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
       vector<vector<string>> a =  solveA("aab");
       for(int i = 0;i<a.size();i++){
           for(int j = 0;j<a[i].size();j++){
               cout<<a[i][j]<<" ";
           }
           cout<<endl;
       }
    }

    return 0;
}
