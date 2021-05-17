#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int n,e=0;cin>>n;
for(int i=0;i<n;i++){
    int a;cin>>a;
    if(a%2)e++;
}
if(e==0||e==n)cout<<"YES\n";
else cout<<"NO\n";
}
return 0;
}
