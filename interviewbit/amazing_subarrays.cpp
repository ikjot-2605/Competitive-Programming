
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
bool isVowel(char A){
    if(A=='a'||A=='e'||A=='e'||A=='i'||A=='o'||A=='u'||A=='A'||A=='E'||A=='I'||A=='O'||A=='U')return true;return false;
}
int solve(string A)
{
    int n = A.length();
    int answer = 0;
    for(int i =0;i<A.length();i++){
        if(isVowel(A[i])){
            int remaining = n-i-1;
            answer = (answer + remaining+1)%M;
        }
        else continue;
    }
    return answer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve("ABEC");
    return 0;
}