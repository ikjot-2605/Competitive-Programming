/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static boolean check(long prev,long now){
        int flag=0;
        if(prev>now)return false;
        else{
            while(prev>0){
                if(prev%2==1&&now%2==0)
                {flag=1;break;}
                prev/=2;now/=2;
            }
        }
        if(flag==1)return false;
        else return true;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        int imp = 1000000007;
        while(T-- >0) {
            int N = scan.nextInt();
            long[] numbers = new long[N];
            for(int i = 0; i < N; i++) {
                numbers[i] = scan.nextLong();
            }
            int flag = 0;
            for(int i = 1; i < N; i++)  {
                if(!check(numbers[i-1], numbers[i])) {
                    flag =1;
                    System.out.println(0);
                    break;
                }
            }
            if(flag == 1) {
                continue;
            }
            long count = 1;
            for(int i = 0; i < N -1; i++) {
                long Q = Long.bitCount(numbers[i]);
                for(int j = 0; j < Q; j++) {
                    count *= 2;
                    count %= imp;
                }
            }
            System.out.println(count);
        }
	}
}
