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
        long t=sc.nextInt();

        for(long i=0;i<t;i++){
            long n=sc.nextInt();
            long a=sc.nextInt();
            long b=sc.nextInt();
            long c=sc.nextInt();
            long min_time=Long.MAX_VALUE;
            for(long j=0;j<n;j++){
                long f=sc.nextInt();
                if(Math.abs(f-b)+Math.abs(f-a)+c<min_time){
                    min_time=Math.abs(f-b)+Math.abs(f-a)+c;

                }

            }
            System.out.println(min_time);
        }
	}
}
