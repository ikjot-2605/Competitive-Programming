
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

vector<int> findSubstring(string A, const vector<string> &B) {
    int noOfWords = B.size();
    vector<int> res;
    if (A.size() == 0 || B.size() == 0){
        return res;
    }
    
    int wordSize = B[0].size();
    unordered_map<string, int> hash;
    
    for (const auto& b : B)
        ++hash[b];
    
    auto i = 0;
    while ((i + wordSize*noOfWords - 1) < A.size()) {
        unordered_map<string, int> tempHash;
        auto j = 0;
        while (j < A.size()) {
            string word = A.substr(i + j*wordSize, wordSize);
            if (hash.find(word) == hash.end()) {
                break;
            } else {
                if (++tempHash[word] > hash[word]){
                    break;
                }
                ++j;
            }
            
            if (j == noOfWords)
                res.emplace_back(i);
        }
        ++i;
    }
    
    return res;


}

void solveA(){
  string s = "barfoothefoobarman";
  vector<string> vec= {"foo","bar"};
  vector<int> vv=findSubstring(s,vec);
  for(int i = 0;i<vv.size();i++){
    cout<<vv[i]<<" ";
  }
  cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solveA();
    }

    return 0;
}
