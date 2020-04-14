#include<stdio.h>
int main()
{
    long int n,q,block=0,x,y,i,j;
    scanf("%ld %ld",&n,&q);

    int a[4][n+2];
    for(i=0;i<4;i++)
    {
        for(j=0;j<n+2;j++)
        {
            a[i][j]=0;
        }
    }
    while(q--)
    {
        scanf("%ld %ld",&x,&y);
        if(a[x][y]==0)
        {
            a[x][y]=1;
            if(a[x+1][y]==1)block++;
            if(a[x+1][y-1]==1)block++;
            if(a[x+1][y+1]==1)block++;
            if(a[x-1][y-1]==1)block++;
            if(a[x-1][y]==1)block++;
            if(a[x-1][y+1]==1)block++;
        }
        else
        {
            a[x][y]=0;
            if(a[x+1][y]==1)block--;
            if(a[x+1][y-1]==1)block--;
            if(a[x+1][y+1]==1)block--;
            if(a[x-1][y-1]==1)block--;
            if(a[x-1][y]==1)block--;
            if(a[x-1][y+1]==1)block--;
        }
        if(block==0)printf("yes\n");
        else printf("no\n");
    }
}
