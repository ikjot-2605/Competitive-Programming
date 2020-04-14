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
public class c_26_3 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int x[]=new int[n];
            int a[]=new int[n];
            int b[]=new int[n];
            String s=sc.next();
            int flag=0;
            int justnow=0;
            for(int i=0;i<n;i++){
                if(s.charAt(i)!='1'&&flag==0){

                    if(s.charAt(i)=='2'){a[i]=1;b[i]=1;}
                    if(s.charAt(i)=='0'){a[i]=0;b[i]=0;}

                    justnow=1;
                    continue;
                }
                if(s.charAt(i)=='1'&&justnow==1){
                    justnow=0;
                    a[i]=1;
                    b[i]=0;
                    flag=1;
                    continue;

                }
                if(s.charAt(i)=='2'){a[i]=0;b[i]=2;}
                if(s.charAt(i)=='0'){a[i]=0;b[i]=0;}
                if(s.charAt(i)=='1'){a[i]=0;b[i]=1;}

            }
            for(int i=0;i<n;i++){System.out.print(a[i]);}
            System.out.println();
            for(int i=0;i<n;i++){System.out.print(b[i]);}
            System.out.println();
        }
    }
}
