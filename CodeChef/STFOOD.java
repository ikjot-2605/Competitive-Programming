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
        for(int i=0;i<t;i++){
            int n=sc.nextInt();
            int maxProf=0;

            for(int j=0;j<n;j++){
                int s=sc.nextInt();
                int p=sc.nextInt();
                int v=sc.nextInt();
               if((p/(s+1))*v>maxProf)maxProf=(p/(s+1))*v;
            }
            int answer=(int)maxProf;
            System.out.println(answer);
        }
	}
}
