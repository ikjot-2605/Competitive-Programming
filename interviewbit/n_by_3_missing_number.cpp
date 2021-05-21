


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

int solveA(vector<int> arr)
{
    int n = arr.size();
int count1 = 0, count2 = 0;
    int first=INT_MAX    , second=INT_MAX    ;
 
    for (int i = 0; i < n; i++) {
 
        
        
        if (first == arr[i])
            count1++;
 
        
        
        else if (second == arr[i])
            count2++;
     
        else if (count1 == 0) {
            count1++;
            first = arr[i];
        }
 
        else if (count2 == 0) {
            count2++;
            second = arr[i];
        }
 
        
        
        
        else {
            count1--;
            count2--;
        }
    }
 
    count1 = 0;
    count2 = 0;
 
    
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == first)
            count1++;
 
        else if (arr[i] == second)
            count2++;
    }
 
    if (count1 > n / 3)
        return first;
 
    if (count2 > n / 3)
        return second;
 
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    
    while (T--)
    {
        cout<<solveA({1,2,3});
    }

    return 0;
}
