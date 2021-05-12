
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

const int MAX_CHAR = 26; 

string firstnonrepeating(string str) 
{ 
    queue<char> q; 
    string b;
    int charCount[MAX_CHAR] = { 0 }; 
  
    // traverse whole stream 
    for (int i = 0; str[i]; i++) { 
  
        // push each character in queue 
        q.push(str[i]); 
  
        // increment the frequency count 
        charCount[str[i] - 'a']++; 
  
        // check for the non pepeating character 
        while (!q.empty()) { 
            if (charCount[q.front() - 'a'] > 1) 
                q.pop(); 
            else { 
                b.push_back(q.front());
                break; 
            } 
        } 
  
        if (q.empty()) 
            b.push_back('#'); 
    } 
    return b;
} 

string solve(string A) 
{
    
    return firstnonrepeating(A);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //vector<string> demo={"0.6","0.7","0.8"};
    int T = 1;
    cin >> T;
    while (T--)
    {
        string ans = solve("abcabc");
        cout<<ans;
    }

    return 0;
}