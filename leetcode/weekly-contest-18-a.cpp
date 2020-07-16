
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

vector<string> solve(vector<string> words)
{
    vector<char> first = {'q','w','e','r','t','y','u','i','o','p'};
        vector<char> second = {'a','s','d','f','g','h','j','k','l'};
        vector<char> third = {'z','x','c','v','b','n','m'};
        vector<string> ans;
        for(string word : words) {
            int inTop = 0, inBottom = 0, inMiddle = 0;
            for(char c : word) {
                c = tolower(c);
                if(find(first.begin(), first.end(), c) != first.end()) inTop += 1;
                else if(find(second.begin(), second.end(), c) != second.end()) inMiddle += 1;
                else if(find(third.begin(), third.end(), c) != third.end()) inBottom += 1;
            }
            if(inTop == word.length() || inMiddle == word.length() || inBottom == word.length())
                ans.push_back(word);
        }
        
        return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> arr = {"Hello", "Alaska", "Dad", "Peace"};
    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve(arr);
    }

    return 0;
}