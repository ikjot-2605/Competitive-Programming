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
public class a_26_3 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int a=sc.nextInt();
            int b=sc.nextInt();
            if(a>b){
                if(a%b==0)System.out.println(0);
                else System.out.println(b-(a%b));
            }
            else{
                System.out.println(b-a);

            }
        }
    }
}
