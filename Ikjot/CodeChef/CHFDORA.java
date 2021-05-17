/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++){
            int n=sc.nextInt();
            int m=sc.nextInt();
            int arr[][]=new int[n][m];
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    arr[j][k]=sc.nextInt();
                }
            }
           int answer=0;
            int length=0;
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    while(true&&j-length>=0&&j+length<=n-1&&k-length>=0&&k+length<=m-1){
                    if(arr[j-length][k]==arr[j+length][k]&&arr[j][k-length]==arr[j][k+length]){
                        answer++;
                        length++;
                    }
                    else{
                        break;
                    }
                    }
                    length=0;
                }
            }
    System.out.println(answer);
                }
            }
}
