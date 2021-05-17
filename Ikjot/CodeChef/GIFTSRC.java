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
               String s=sc.next();
               int x=0;
               int y=0;
               for(int i=0;i<n;i++){
                   if(i==0&&s.charAt(i)=='R')x++;
                   else if(i==0&&s.charAt(i)=='U')y++;
                   else if(i==0&&s.charAt(i)=='D')y--;
                   else if(i==0&&s.charAt(i)=='L')x--;
                   else if(s.charAt(i)=='R'&&i>0&&s.charAt(i)!=s.charAt(i-1)&&s.charAt(i-1)!='L'){
                       x++;
                   }
                   else if(s.charAt(i)=='L'&&i>0&&s.charAt(i)!=s.charAt(i-1)&&s.charAt(i-1)!='R'){
                       x--;
                   }
                   else if(s.charAt(i)=='U'&&i>0&&s.charAt(i)!=s.charAt(i-1)&&s.charAt(i-1)!='D'){
                       y++;
                   }
                   else if(s.charAt(i)=='D'&&i>0&&s.charAt(i)!=s.charAt(i-1)&&s.charAt(i-1)!='U'){
                       y--;
                   }
               }
               System.out.println(x+" "+y);
           }
	}
}
