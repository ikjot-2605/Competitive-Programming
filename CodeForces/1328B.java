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
public class test1 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        long arr[]=new long[100000];
        for(int i=0;i<100000;i++){
            arr[i]=(i+1);
            arr[i]*=i;
            arr[i]/=2;
            arr[i]+=1;
        }
        while(t-->0){

            int n=sc.nextInt();
            int k=sc.nextInt();

        	int i=0;
            int index=0;

            while(k>arr[i]){
                i++;
                index=i-1;

            }
            if(k==arr[index+1]){
                for(int a=0;a<n-2-index-1;a++){System.out.print('a');}
                System.out.print('b');
                for(int a=0;a<index+1;a++)System.out.print('a');
                System.out.print('b');
                System.out.println();
            }
            else{
                int first_b_pos=n-2-index;
            int second_b_pos=(int) (n-1-(k-arr[index]));
            for(i=0;i<first_b_pos;i++){System.out.print('a');}
            System.out.print('b');
            for(i=0;i<second_b_pos-first_b_pos-1;i++){System.out.print('a');}
            System.out.print('b');
            for(i=0;i<(n-1)-second_b_pos;i++){System.out.print('a');}
            System.out.println();
            }
        //}
    }
    }
    }
