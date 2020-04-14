#include <stdio.h>
long long max(long long a,long long b){
    if(a>b)return a;
    else return b;

}
int main()
{
    long long n;
    scanf("%lld",&n);
        long long b[n];
        for(long long i=0;i<n;i++){
            scanf("%lld",&b[i]);
        }
        long long a[n];
        a[0]=b[0];
        long long m=a[0];
        long long prev_m=0;
        for(long long i=1;i<n;i++){
            prev_m=m;
            m=max(prev_m,a[i-1]);
            a[i]=b[i]+m;
        }
        for(long long i=0;i<n;i++)printf("%lld ",a[i]);
}
