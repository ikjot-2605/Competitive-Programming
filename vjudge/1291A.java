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
public class vjudge_3_b {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){

        int n=sc.nextInt();
        String s=sc.next();
        int i=0;
        int c=0;
        int k=0;
        for( i=0 ; i<n ; i++ )
        {
             if(s.charAt(i)%2==1)
                c++;
        }
        if(c>1)
        {
            k=0;
            for( i=0 ; i<n ; i++ )
            {
                 if(s.charAt(i)%2==1)
                 {
                    System.out.print(s.charAt(i));
                     k++;
                 }
                if(k==2)
                    break;
            }
        }
        else
            System.out.print("-1");
        c=0;
        System.out.println();
        }
    }
}
