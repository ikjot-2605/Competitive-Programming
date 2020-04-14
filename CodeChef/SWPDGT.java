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
class Codechef{


      public static void main(String args[]){

            Scanner sc=new Scanner(System.in);
            int t=sc.nextInt();
            while(t-->0){
                int a=sc.nextInt();
                int b=sc.nextInt();
                int a2=a%10;
                int a1=(a-a2)/10;
                int b2=b%10;
                int b1=(b-b2)/10;
                if(a1==b1&&a1==0){
                    System.out.println(a+b);
                }
                if(a1>0&&b1==0){
                    if(a1<b2)System.out.println(b2*10+a1+a2);
                    else System.out.println(a1*10+b2+a2);
                }
                if(a1==0&&b1>0){
                    if(b1<a2)System.out.println(a2*10+b1+b2);
                    else System.out.println(b1*10+b2+a2);
                }
                if(a1>0&&b1>0){
                    int max1=a+b;
                    int max2=a+b;
                    if(b2>a1)max1=(b1+b2)*10 + (a1+a2);
                    if(a2>b1)max2=(a1+a2)*10 + (b1+b2);
                    System.out.println(Math.max(max1,max2));
                }
            }
      }
}
