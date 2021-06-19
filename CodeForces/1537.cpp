
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

void solveA(){
	
}
void solveB(){

}
void solveC(){

}
void solveD(){

}
void solveE(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i = 0;
    string to_replicate;
    int val = s[0];
    to_replicate.push_back(val);
    for(int i =1 ;i<n;i++){
        if(s[i]>=val){
            break;
        }
        else{
            to_replicate.push_back(s[i]);
        }
    }
    cout<<to_replicate;
    while(to_replicate.length()<k){
        to_replicate +=to_replicate;
    }
    while(to_replicate.length()!=k){
        to_replicate.pop_back();
    }
    cout<<to_replicate<<endl;
}
void solveF(){

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solveE();
    }

    return 0;
}
