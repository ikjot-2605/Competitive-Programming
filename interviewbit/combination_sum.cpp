
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
//this is for no duplication allowed case
// void helper(vector<int> A,int curr_val,vector<int> curr,int index,int target){
//     if(curr_val==target){
//         solution.push_back(curr);
//         return;
//     }
//     if(index==A.size())return;
//     if(curr_val+A[index]<=target){
//         helper(A,curr_val,curr,index+1,target);
//         curr.push_back(A[index]);
//         helper(A,curr_val+A[index],curr,index+1,target);
//     }
//     else{
//         helper(A,curr_val,curr,index+1,target);
//     }
// }
void helper(vector<int> A, int curr_val, vector<int> curr, int index, int target)
{
    if (curr_val == target)
    {
        solution.push_back(curr);
        return;
    }
    if (index == A.size())
        return;
    if (curr_val + A[index] <= target)
    {
        helper(A, curr_val, curr, index + 1, target);
        int temp  = curr_val;
        while(temp+A[index]<=target){
            curr.push_back(A[index]);
            temp+=A[index];
            helper(A, temp, curr, index + 1, target);
        }
    }
    else
    {
        helper(A, curr_val, curr, index + 1, target);
    }
}
vector<vector<int>> solveA(vector<int> A, int B)
{
    solution.clear();
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    helper(A, 0, {}, 0, B);
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
        vector<vector<int>> a = solveA({2, 3, 6, 7}, 7);
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < a[i].size(); j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
