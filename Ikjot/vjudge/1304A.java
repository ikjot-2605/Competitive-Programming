/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author ikjot
 */
import java.util.Scanner;
public class vjudge_2_A {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        long t=sc.nextLong();
        for(long i=0;i<t;i++){
        long x=sc.nextLong();
        long y=sc.nextLong();
        long a=sc.nextLong();
        long b=sc.nextLong();
        long tall=x;
        long small=y;
        long time=0;
        if((y-x)%(a+b)==0)System.out.println((y-x)/(a+b));
        else System.out.println(-1);
        }
    }

}
