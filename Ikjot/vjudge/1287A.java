import java.util.*;
    public class Codechef
    {
    	public static void main(String[] args) {
    		Scanner sc=new Scanner(System.in);
    		int t=sc.nextInt();
    		while(t--!=0){
    		    int k=0,n=sc.nextInt();
    		    String s=sc.next();
    		    while(s.indexOf("AP")!=-1){
    		        s=s.replaceAll("AP","AA");
    		        k++;
    		    }
    		    System.out.println(k);
    		}
    	}
    }
