
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
string getHowToSay(string s){
    int curr_count = 0;
    int curr_letter = s[0];
    string str="";
    for(int i =0;i<s.length();i++){
        if(curr_letter!=s[i]){
            str.append(to_string(curr_count));
            str.push_back   (curr_letter);
            curr_count = 1;
            curr_letter = s[i];
        }
        else{
            curr_count++;
        }
    }
    if(curr_count>0){
        str.append(to_string(curr_count));
        str.push_back(curr_letter);
    }
    return str;
}
string solve(int n)
{
    vector<string> str(n);
    str[0]="1";
    for(int i =1;i<n;i++){
        str[i] = getHowToSay(str[i-1]);
    }
    return str[n-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve(3)<<endl;
    cout<<solve(4)<<endl;
    cout<<solve(5)<<endl;
    cout<<solve(6)<<endl;

    return 0;
}