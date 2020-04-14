/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here

					Scanner sc=new Scanner(System.in);
			int t=sc.nextInt();
			int i=0;
			int j=0;
			int k=0;
			int diff=0;
			int count=0;
			for(i=0;i<t;i++) {
				int n=sc.nextInt();
				Stack<Integer> stack=new Stack<Integer>();
				stack.push(0);
				for(j=1;j<n;j++) {
					for(k=j-2;k>=0;k--) {
						if(stack.get(j-1)==stack.get(k))
						{
							diff=j-1-k;
							break;
						}
					}
					stack.push(diff);
					diff=0;
				}
				for(j=0;j<n;j++) {if(stack.get(n-1)==stack.get(j)) {count++;}}
				System.out.println(count);
				count=0;
			}
	}
}
