#include<stdio.h>
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        int q;
        scanf("%d %d",&n,&q);
        int A[n];
        int eve=0;
        for(int j=0;j<n;j++){
            scanf("%d",&A[j]);
            if(countSetBits(A[j])%2==0)eve++;
        }
        int p=0;
        for(int j=0;j<q;j++){
            scanf("%d",&p);
            if(countSetBits(p)%2==0)printf("%d %d\n",eve,(n-eve));
            else printf("%d %d\n",(n-eve),(eve));
        }
    }
}
