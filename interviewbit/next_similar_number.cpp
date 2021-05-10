
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

string solve(string A)
{   
    int n = A.length();
    for(int i = n-2;i>=0;i-- ){
        char min_char = '9';
        int index = -1;
        for(int j =i;j<n;j++){
            if(A[j]>A[i]&&A[j]<=min_char){
                min_char = A[j];
                index = j;
            }
        }
        if(index!=-1){
            char temp = A[i];
            A[i] = A[index];
            A[index] = temp;
            sort(A.begin()+i+1, A.end());
            return A;
        }
    }
    return "-1";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //vector<string> demo={"0.6","0.7","0.8"};
    cout<<solve("892795")<<endl<<solve("218765")<<endl<<solve("4321")<<endl;
    return 0;
}