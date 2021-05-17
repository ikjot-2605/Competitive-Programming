import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author ikjot
 */
public class vjudge_2_c {
    public static void main(String args[]) {
    Scanner sc=new Scanner(System.in);
        long t=sc.nextLong();
    for (long i=0;i<t;i++) {
        long n=sc.nextLong();
        long g=sc.nextLong();
        long b=sc.nextLong();

        long needG = (n + 1) / 2;
        long totalG = needG / g * (b + g);

        if (needG % g == 0L)totalG+=-b;
        else totalG+=needG%g;
                System.out.println(Math.max(n, totalG));
    }
}
}
