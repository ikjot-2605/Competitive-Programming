
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

void solve()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int foundj=0;
   int iindex=0,jindex=0,kindex=0;
   int j1=0;
   for(int i=0;i<n;i++){
       iindex=i;
       for(int j=i+1;j<n;j++){
           if(arr[j]>arr[i]&&!foundj){
               foundj=1;
                jindex=j;
                j1=arr[j];
           }
           else if(foundj){
               if(arr[j]<j1){
                   kindex=j;
                   break;
               }
           }

       }
       
       if(kindex!=0){
           break;
       }else{
           jindex=0;
           iindex=0;
           kindex=0;
           foundj=0;
       }
   }
   if(kindex!=0){
       cout<<"YES\n";
       cout<<iindex+1<<" "<<jindex+1<<" "<<kindex+1<<endl;
   }
   else{
       cout<<"NO\n";
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}