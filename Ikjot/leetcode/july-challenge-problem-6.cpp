
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

void solve(vector<int> arr)
{
    int carry=0;
    if(arr[arr.size()-1]!=9){
        arr[arr.size()-1]++;
    }
    else{
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==9&&i!=0){
                arr[i]=0;
            }
            else if(arr[i]==9&&i==0){
                arr[i]=1;
                arr.push_back(0);
            }
            else{
                arr[i]++;
                break;
            }
        }
        
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr={9,9,9,9};
    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve(arr);
    }

    return 0;
}