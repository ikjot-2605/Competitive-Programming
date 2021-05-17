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
           int t=sc.nextInt();
           while(t-->0){
               int n=sc.nextInt();

               int sw[]=new int[n];


               int max=0;
               int last=0;
               int first=0;
               for(int i=1;i<=n;i++){
                   sw[i-1]=sc.nextInt();
                   if(max<sw[i-1]){max=sw[i-1];first=i-1;last=i-1;}
                   if(max==sw[i-1]){last=i-1;}

               }
               System.out.println(Math.max(n/2-last+first,0));
           }
	}
}
