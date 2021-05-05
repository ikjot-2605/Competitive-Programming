
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

int solveA(vector<int> pre){
    stack<int> s;
int root = INT_MIN;

for(int i =0;i<pre.size();i++){
    if(root > pre[i]){
        return 0;
    }
    while(!s.empty() && s.top()<pre[i]){
       root = s.top();
       s.pop();
    }
    s.push(pre[i]);
}
return 1;
}
void solveB(){

}
void solveC(){

}
void solveD(){

}
void solveE(){

}
void solveF(){

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        cout<<solveA({7, 7, 10, 10, 9, 5, 2, 8});
    }

    return 0;
}
