
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
vector<string> solution;
map<int,vector<char>> mapping = {{0,{'0'}},{1,{'1'}},{2,{'a','b','c'}},{3,{'d','e','f'}},{4,{'g','h','i'}},{5,{'j','k','l'}},{6,{'m','n','o'}},{7,{'p','q','r','s'}},{8,{'t','u','v'}},{9,{'w','x','y','z'}}};
void helper(string A,int curr_index,string curr){
    if(curr_index==A.length()){
        solution.push_back(curr);
        return;
    }
    int val_curr = A[curr_index]-'0';
    vector<char> toSelectFrom = mapping[val_curr];
    string temp = curr;
    for(int i =0 ;i<toSelectFrom.size();i++){
        temp = curr;
        temp.push_back(toSelectFrom[i]);
        helper(A,curr_index+1,temp);
    }
}
vector<string> solveA(string A){
    solution.clear();
    helper(A,0,{});
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
       vector<string> a =  solveA("234");
       for(int i = 0;i<a.size();i++){
           cout<<a[i]<<endl;
       }
    }

    return 0;
}
