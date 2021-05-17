#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m=1000000007;
void CARSELL(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++){cin >> arr[i];}
    sort(arr,arr+n);
    ll sum=0;
    ll remove=0;
    for(ll i=n-1;i>=0;i--){
        sum=(sum+arr[i])%m;
        if(arr[i]>=remove)sum=(sum-remove)%m;
        else sum=(sum-arr[i])%m;
        remove++;
    }
    cout << sum << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0){CARSELL();}
    return 0;

}
