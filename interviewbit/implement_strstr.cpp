
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
const unsigned int M = 10003;
const long double PI = 3.141592653589793236L;

typedef long long int ll;
typedef long double ld;
#define MAX 50
using namespace std;
bool isStringHere(string haystack,string needle,int index){
    int n = needle.length();
    for(int i=0;i<n;i++){
        if(haystack[i+index]==needle[i]){

        }
        else{
            return false;
        }
    }
    return true;
}
int solve(string A,string B)
{
    if(A.length()==0||B.length()==0)return -1;
    int n = A.length();
    for(int i =0 ;i<n;i++){
        if(isStringHere(A,B,i)){
            return i;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve("ABEC","ECE");
    return 0;
}