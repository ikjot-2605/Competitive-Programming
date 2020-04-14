import java.util.*;
public class b_20_3vj {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int s=sc.nextInt();
            int k=sc.nextInt();
            int closed[]=new int[k];
            int min=Integer.MAX_VALUE;
            int ans=0;
            for(int i=0;i<k;i++){
                closed[i]=sc.nextInt();

            }


            int ans_up=0;
            int ans_down=0;
            int reached_down=0;
            int reached_up=0;
            int flag=0;
            for(int i=s;i<=n;i++){
                flag=0;
                for(int j=0;j<k;j++){if(closed[j]==i)flag=1;}
                if(flag==0){ans_up=i-s;reached_up=1;break;}
            }
            flag=0;
            for(int i=s;i>=1;i--){
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
