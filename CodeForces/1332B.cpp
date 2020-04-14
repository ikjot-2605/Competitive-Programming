#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int c[n]={0};
		int d=1;
		int b[]={2,3,5,7,11,13,17,19,23,29,31};
		for(int i=0;i<11;i++){
			int f=0;
			for(int j=0;j<n;j++){
				if(c[j]==0 && a[j]%b[i]==0){
					c[j]=d;
					f=1;

				}
			}
			if(f==1)d++;
		}
		cout<<d-1<<endl;
		for(int i=0;i<n;i++)cout<<c[i]<<" ";

		cout<<endl;
	}
}
