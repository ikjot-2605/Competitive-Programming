#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int r0,c0;
        scanf("%d %d",&r0,&c0);
        int count=0;
        if(r0!=c0)count++;
        if((r0+c0)/2!=1)count++;
        printf("%d\n",count+16);
        if(r0!=c0){printf("%d %d\n",(r0+c0)/2,(r0+c0)/2);}
        if((r0+c0)/2!=1){printf("%d %d\n",1,1);}
        printf("%d %d\n",8,8);
        printf("%d %d\n",7,7);
        printf("%d %d\n",8,6);
        printf("%d %d\n",3,1);
        printf("%d %d\n",1,3);
        printf("%d %d\n",6,8);
        printf("%d %d\n",5,7);
        printf("%d %d\n",4,8);
        printf("%d %d\n",1,5);
        printf("%d %d\n",5,1);
        printf("%d %d\n",8,4);
        printf("%d %d\n",7,3);
        printf("%d %d\n",8,2);
        printf("%d %d\n",7,1);
        printf("%d %d\n",1,7);
        printf("%d %d\n",2,8);
    }
}
