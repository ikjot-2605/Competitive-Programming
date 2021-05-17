#include <bits/stdc++.h>
using namespace std;

void solve() {
 int x[100001],y[100001];
long long n,m,q;
    cin>>n>>m>>q;
   long r[n+1]={0};
   long c[m+1]={0};


  for(long long i=1;i<=q;i++){
      cin>>x[i]>>y[i];

  }

  long long l=0;


  for(long long i=1;i<q+1;i++){
    r[x[i]]+=1;
  }
   for(long long i=1;i<n+1;i++){
       if(r[i]&1){
           l++;
       }

   }
     for(long long i=1;i<q+1;i++){
    c[y[i]]+=1;
  }
  long long sum=0;
   for(long long i=1;i<m+1;i++){
      if(!(c[i]&1)){
          sum+=l;
      }
      else {
          sum+=(n-l);
      }
   }


  cout<<sum<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--)solve();
}
