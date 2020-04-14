/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author ikjot
 */

import java.util.*;
public class Testing {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        long t=sc.nextLong();
        while(t-->0){
            long n=sc.nextLong();
            long k=sc.nextLong();
            if(n%2==0&&k%2==1){System.out.println("NO");continue;}
            else if(n%2==1&&k%2==0){System.out.println("NO");continue;}
            else{

                long sum=k*k;
                if(sum<=n&&(n-sum)%2==0){System.out.println("YES");continue;}
                else {System.out.println("NO");continue;}


            }
        }
    }
}
