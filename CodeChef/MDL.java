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
        int deleted=0;
        for(int i=0;i<t;i++){
            int n=sc.nextInt();
            int arr[]=new int[n];
            for(int j=0;j<n;j++){
                arr[j]=sc.nextInt();
            }
            for(int j=0;j<n-2;j++){
                if(arr[0]>=arr[1]&&arr[0]>=arr[2]){
                    if(arr[1]>arr[2]){
                        deleted=1;
                    }
                    else{
                    deleted=2;
                    }
                }
                if(arr[1]>=arr[2]&&arr[1]>=arr[0]){
                    if(arr[0]>arr[2]){
                        deleted=0;
                    }
                    else{
                    deleted=2;
                    }
                }
                if(arr[2]>=arr[1]&&arr[0]<=arr[2]){
                    if(arr[1]>arr[0]){
                        deleted=1;
                    }
                    else{
                    deleted=0;
                    }
                }
                for(int k=0;k<n-deleted-j-1;k++){
                    arr[deleted+k]=arr[deleted+k+1];
                }
            }
            System.out.print(arr[0]+" "+arr[1]+'\n');
        }
	}
}
