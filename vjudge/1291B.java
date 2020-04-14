import java.util.*;

public class codeforce
{
	public static void main(String args[])
	{
		Scanner sj = new Scanner(System.in);
		int t = sj.nextInt();
		while(t-->0){
			int n = sj.nextInt();
			if(n%2!=0){
				n = n - 3;
				System.out.print(7);
			}
			for(int i=0;i<n/2;i++){
				System.out.print(1);
			}
			System.out.println();
		}
	}
}
