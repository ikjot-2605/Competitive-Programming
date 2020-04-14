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
            int answer=0;
            int s=sc.nextInt();
            int widths[]=new int[3];
            widths[0]=sc.nextInt();
            widths[1]=sc.nextInt();
            widths[2]=sc.nextInt();
           if(s>=6)answer=1;
           if(s==4){
               if(widths[0]+widths[1]<=4&&widths[2]+widths[1]<=4){answer=2;}
               if(widths[0]+widths[1]+widths[2]<=4)answer=1;

           }
           if(s==5){
               if(widths[0]+widths[1]+widths[2]==6)answer=2;
               else answer=1;
           }
           int index=0;
           if(s==1){
               answer=3;
           }
           if(s==2){
               if(widths[0]+widths[1]<=2||widths[2]+widths[1]<=2)answer=2;
               else answer=3;
           }
           if(s==3){
               if(widths[0]+widths[1]<=3||widths[2]+widths[1]<=3)answer=2;
               else answer=3;
               if(widths[0]+widths[1]+widths[2]<=3)answer=1;
           }
           System.out.println(answer);
        }
	}
}
