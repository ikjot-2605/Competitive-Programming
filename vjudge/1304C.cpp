/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

        long long int t;
	    scanf("%lld",&t);
        long long int max1=0;
        long long int min1=0;
        while(t--!=0)
	{
            long long a[1000001];
            long long int n;
            long long int m;
            scanf("%lld %lld",&n,&m);
            a[0]=0;
		max1=m;
		min1=m;

		long long int flag=1;
		for(int i=1;i<=n;i++)
		{

                        scanf("%lld",&a[i]);
			long long l;
			scanf("%lld",&l);
                        long long r;
                        scanf("%lld",&r);
                        long long tl=0;
                        long long tr=0;
                        long k=a[i]-a[i-1];
			tl=min1-k;
			tr=max1+k;
			if(tl>r||tr<l)
			{
				flag=0;
			}
			else
			{
				max1=(tr>r)?r:tr;
				min1=(tl>l)?tl:l;
			}
		}
		if(flag==0)
		printf("NO\n");
		else
		printf("YES\n");
	}

}
