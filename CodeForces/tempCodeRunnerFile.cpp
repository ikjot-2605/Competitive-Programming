
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
    int n;
    cin>>n;
    vector<int> arr(n);
    int even = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        
    }
    int count = 0;
    if(arr[0]%2==0)count++;
    if(arr[1]%2==0)count++;
    if(arr[2]%2==0)count++;
    if(count>=2){
        even = 1;
    }
    for(int i =0;i<n;i++){
        if(even && arr[i]%2==1){
            cout<<arr[i];
        }
        else if(even==0&&arr[i]%2==0){
            cout<<arr[i];
        }
    }
}
void solveB(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0 ;i<m;i++){
        cin>>b[i];
    }
    int mini = INT_MAX;
    int j =0 ;
    int ans = 0;
    for(int i =0;i<n;i++){
        while(j<m-1 && abs(a[i]-b[j])>=abs(a[i]-b[j+1])) j++;
        ans =max(ans,abs(a[i]-b[j]));
    }
    cout<<ans<<endl;
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
    //cin >> T;
    while (T--)
    {
        solveB();
    }

    return 0;
}
