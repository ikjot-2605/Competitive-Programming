import java.util.*;
public class b_20_3vj {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        long t=sc.nextLong();
        while(t-->0){
            long n=sc.nextLong();
            long s=sc.nextLong();
            int k=sc.nextInt();
            long closed[]=new long[k];

            long ans=0;
            for(int i=0;i<k;i++){
                closed[i]=sc.nextLong();

            }


            long ans_up=0;
            long ans_down=0;
            long reached_down=0;
            long reached_up=0;
            long flag=0;
            for(long i=s;i<=n;i++){
                flag=0;
                for(int j=0;j<k;j++){if(closed[j]==i)flag=1;}
                if(flag==0){ans_up=i-s;reached_up=1;break;}
            }
            flag=0;
            for(long i=s;i>=1;i--){
                flag=0;
                for(int j=0;j<k;j++){if(closed[j]==i)flag=1;}
                if(flag==0){ans_down=s-i;reached_down=1;break;}
            }
            if(reached_up==1&&reached_down==1)ans=Math.min(ans_up, ans_down);
            else if(reached_up==1&&reached_down==0)ans=ans_up;
            else if(reached_up==0&&reached_down==1)ans=ans_down;
            else ans=0;
            System.out.println(ans);
        }
    }
}
