/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);

	int T=sc.nextInt();

	while(T-->0){
	    int n=sc.nextInt();;

    int start=0;
    int end=0;
    int dist=0;
    int arr[]=new int[n];
    int flag=0;
    int started=0;
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();

    }
    for(int i=0;i<n;i++ ){
        if(arr[i]==1&&started==0){started=1;continue;}
        if(arr[i]==0&&started==1){dist++;continue;}
        if(arr[i]==0&&started==0)continue;
        if(arr[i]==1&&started==1&&dist<5){System.out.println("NO");flag=1;break;}
        if(arr[i]==1&&started==1&&dist>=5){dist=0;continue;}
    }
    if(flag==0)System.out.println("YES");
	}













	}
}
