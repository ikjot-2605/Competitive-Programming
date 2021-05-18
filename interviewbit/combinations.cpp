
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
vector<vector<int>> sol;
void helper(vector<int> curr,int curr_length,int k,int curr_index,vector<int> allNums,int allNumsSize){
    if(curr_length>k)return;
    if(curr_index==allNumsSize){
        if(curr_length==k)sol.push_back(curr);
        return;
    }
    helper(curr,curr_length,k,curr_index+1,allNums,allNumsSize);
    curr.push_back(allNums[curr_index]);
    helper(curr,curr_length+1,k,curr_index+1,allNums,allNumsSize);
}

vector<vector<int>> solve(int A, int B)
{
    sol.clear();
    vector<int> allNums = {};
    for(int i =1   ;i<=A;i++){
        allNums.push_back(i);
    }
    helper({},0,B,0,allNums,A);
    sort(sol.begin(),sol.end());
    return sol;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> a= solve(4,2);
    for(int i =0 ;i<a.size();i++){
        for(int j = 0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}