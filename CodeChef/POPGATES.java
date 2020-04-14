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
	        int n=sc.nextInt(),k=sc.nextInt();

	        char c[]=new char[n];
	        int heads=0;
	        for(int i=0;i<n;i++) {
	        	c[i]=sc.next().charAt(0);
	        }
	        int count=0;
	        for(int i=n-1; i>=n-k; --i) {
		        //process coin i
		        if(c[i]=='H') {
			    //flip all coins
			    for(int j=0; j<n; ++j) {
				    if(c[j]=='H')
					    c[j]='T';
				    else
					    c[j]='H';
			}
		}
	}

	        for(int i=0;i<n-k;i++){
	            if(c[i]=='H')heads++;
	        }
	        System.out.println(heads);
	    }
	}
}
