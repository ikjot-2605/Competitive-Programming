import java.util.*;
public class CF_A {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            StringBuffer ans=new StringBuffer();
            if((n-1)%9!=0){
                for(int i=0;i<n-1;i++)ans.append('2');
                ans.append(9);
            }
            else{
                for(int i=0;i<n-2;i++)ans.append('2');
                ans.append("99");
            }
            if(n==1)System.out.println(-1);
            else System.out.println(ans.toString());
        }
    }
}
