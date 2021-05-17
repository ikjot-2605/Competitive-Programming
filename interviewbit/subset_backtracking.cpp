
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
vector<vector<int>> solution;
void helper(vector<int> A,int index,vector<int> curr){
    if(index == A.size()){
        solution.push_back(curr);
        return;
    }
    helper(A,index+1,curr);
    curr.push_back(A[index]);
    helper(A,index+1,curr);
}
vector<vector<int>> solveA(vector<int> A){
    solution.clear();
    helper(A,0,{});
    sort(solution.begin(),solution.end());
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
       vector<vector<int>> a =  solveA({1,2,3});
       for(int i = 0;i<a.size();i++){
           for(int j = 0;j<a[i].size();j++){
               cout<<a[i][j]<<" ";
           }
           cout<<endl;
       }
    }

    return 0;
}
