import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();
            int l=s.length();
            if(s.charAt(l-1)=='o'){System.out.println("FILIPINO");continue;}
            if(s.charAt(l-1)=='u'){System.out.println("JAPANESE");continue;}
            if(s.charAt(l-1)=='a'){System.out.println("KOREAN");continue;}
        }
    }

}
