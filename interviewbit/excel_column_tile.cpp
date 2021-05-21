
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

string solveA(int A){
    int temp =A;
    int count = 0;
    while(temp>0){
        if(temp==26){count++;break;}
        temp/=26;
        count++;
    }
    temp = A;
    string ans; 
    for(int i =count-1;i>=0;i--){
        int power = pow(26,i);
        int val = temp/pow(26,i);
        int rem = temp%(power);
        temp-=val*pow(26,i);
        ans.push_back(val+'A'-1);
        if(temp==0){
            ans[ans.length()-1]--;
            ans.push_back('Z');
            break;
        }
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cout<<solveA(26*26);

    return 0;
}
