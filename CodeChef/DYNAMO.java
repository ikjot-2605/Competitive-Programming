/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{

		 public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        long t=sc.nextLong();
        for(long i=0;i<t;i++){

            long n=sc.nextLong();

            long a=sc.nextLong();

            long s=(long)(2*Math.pow(10,n))+a;

            System.out.println(s);

            System.out.flush();

            long b=sc.nextLong();

            long c=0;

            c=(long)Math.pow(10,n)-b;

            System.out.println(c);

            System.out.flush();

            long d=sc.nextLong();

            long e=(long)Math.pow(10,n)-d;

            System.out.println(e);

            System.out.flush();

            long result=sc.nextLong();

            if(result==-1)break;
        }
    }
	}
