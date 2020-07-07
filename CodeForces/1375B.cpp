#include<cstdio>
using namespace std;
int a[303][303],b[303][303];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;++i)
			for(int j=1;j<=m;++j)
				if(i==1||i==n||j==1||j==m)
					b[i][j]=3;
				else
					b[i][j]=4;
		b[1][m]=b[1][1]=b[n][1]=b[n][m]=2;
		int f=0;
		for(int i=1;i<=n;++i)
			for(int j=1;j<=m;++j){
				scanf("%d",&a[i][j]);
				if(a[i][j]>b[i][j])
					f=1;
			}	
		if(f)
			printf("NO\n");
		else{
			printf("YES\n");
			for(int i=1;i<=n;++i){
				for(int j=1;j<=m;++j)
					printf("%d ",b[i][j]);
				printf("\n"); 
			}
		}	
	}	
	return 0;
}