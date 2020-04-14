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
            int m=sc.nextInt();

            int arr[][]=new int[2][n];
            for(int j=0;j<n;j++){
                arr[0][j]=sc.nextInt();
            }
            for(int j=0;j<n;j++){
                arr[1][j]=sc.nextInt();
            }
            int count[]=new int[m+1];
            int type=0;
            int amount=0;
            for(int j=0;j<n;j++){
                type=arr[0][j];
                amount=arr[1][j];
                count[type]+=amount;
            }
            int min=Integer.MAX_VALUE;
            int flag=0;
            for(int j=0;j<n;j++){
                if(count[arr[0][j]]<min)
                {
                    min=count[arr[0][j]];
                }
            }
            System.out.println(min);
        }
	}
}
