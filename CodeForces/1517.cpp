
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
    ll n;
    cin>>n;
    ll count = 0;
    if(n%2050!=0){cout<<-1<<endl;return;}
    else{
        while(n>0){
            ll temp = 2050;
            while(temp*10<=n){
                temp*=10;
            }
            n-=temp;
            count++;
        }
    }
    cout<<count<<endl;
}
void solveB(){
    int n,m;
    cin>>n>>m;
    int lengths[n][m];
    for(int i =0 ;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>lengths[i][j];
        }
    }
    int answer[n][m];
    int minimum_lengths[n];
    for(int i = 0;i<n;i++){
        int min_val=INT_MAX;
        int min_index = -1;
        for(int j =0;j<m;j++){
            if(min_val>lengths[i][j]){
                min_val = lengths[i][j];
                min_index = j;
            }
        }
        minimum_lengths[i]=min_index;
    }
}
void solveC(){

}
void solveD(){

}
void solveE(){

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
        solveA();
    }

    return 0;
}
