
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

int solveA(int A){
    if(A==1)return 1;
    if(A==2||A==3)return 0;
    int temp = A;
    int sqroot = sqrt(A);
    for(int i = 2;i<=sqroot;i++){
        temp = A;
        int flag =0;
        while(temp!=1){
            if(temp%i==0)temp/=i;
            else{
                flag=1;
                break;
            }
        }
        if(!flag){
            return 1;
        }
    }
    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cout<<solveA(4);

    return 0;
}
