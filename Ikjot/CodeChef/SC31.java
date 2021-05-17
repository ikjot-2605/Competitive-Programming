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
		int i=0;
		int n=0;
		int j=0;
		int k=0;
		String p=" ";
		for(i=0;i<t;i++) {
				n=sc.nextInt();
				String[] arS=new String[n];
				for(j=0;j<n;j++) {
					arS[j]=sc.next();

				}
				int count=0;
				char ar_C[]=arS[0].toCharArray();
				for(j=1;j<n;j++) {
				for(k=0;k<10;k++) {
					if(ar_C[k]==arS[j].charAt(k)&&arS[j].charAt(k)=='1') {ar_C[k]='0';}
					else if(ar_C[k]=='0'&&arS[j].charAt(k)=='1') {ar_C[k]='1';}
					}
				}
				for(j=0;j<ar_C.length;j++) {if(ar_C[j]=='1')count++;}
				System.out.println(count);
		}
	}
}
