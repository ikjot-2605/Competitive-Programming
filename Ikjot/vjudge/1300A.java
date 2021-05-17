import java.util.Scanner;
/**
 *
 * @author ikjot
 */
public class vjudge_3_a {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int a[]=new int[n];
            int count=0;
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();

            }
            int zeroes=0;
            int sum=0;
            for(int i=0;i<n;i++){
                if(a[i]==0)zeroes++;
                sum+=a[i];
            }
            if(sum==(-zeroes)){System.out.println(zeroes+1);}
            else System.out.println(zeroes);
        }
    }
}
