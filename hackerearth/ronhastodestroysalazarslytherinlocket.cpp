
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

// void solve()
// {
//     int n,q;
//     cin>>n>>q;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     multiset<int> arr_find;
//     for(int i=0;i<n;i++){
//         arr_find.insert(arr[i]-i-1);
//     }
//     int count=0;
//     auto it=arr_find.end();
//     it--;
//     multiset<int>::iterator checker=arr_find.begin();
//     for(int i=0;i<q;i++){
//         int type=0;
//         cin>>type;
//         if(type==1){
//             int index;
//             cin>>index;
//             index--;
//             int tofind=arr[index]-index-1;
//             int toreplace;
//             cin>>toreplace;
//             arr[index]=toreplace;
//             checker=arr_find.find(tofind);
//             arr_find.erase(checker);
//             arr_find.insert(toreplace-index-1);
//         }
//         else{
//             int index;
//             cin>>index;
//             int tofind=arr[index-1]-index;
//             checker=arr_find.find(tofind);
//             int diff=distance(checker,arr_find.end());
//             diff--;
//             cout<<diff<<endl;
//             it=arr_find.end();
//             it--;
//         }

//     }
// }
void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<q;i++){
        int type;
        cin>>type;
        if(type==1){
            int index;
            cin>>index;
            int toreplace;
            cin>>toreplace;
            arr[index-1]=toreplace;
        }
        else{
            int index;
            cin>>index;
            int count=0;
            int tocheckwith=arr[index-1]-index;
            for(int i=0;i<n;i++){
                if(i!=index-1){
                    if(arr[i]-i-1>tocheckwith){
                        count++;
                    }
                }
            }
            cout<<count<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}