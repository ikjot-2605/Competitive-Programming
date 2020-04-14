import java.util.*;
public class FrogJump{
  public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(t-->0){
      String s=sc.next();
      char c[]=s.toCharArray();
      int cons_count=0;
      int max_count=0;
      for(int i=0;i<c.length;i++){
        if(c[i]=='L'){
          cons_count++;
          if(cons_count>max_count)max_count=cons_count;
        }
        if(c[i]=='R')cons_count=0;
      }

      System.out.println((max_count+1));
    }
  }
}
