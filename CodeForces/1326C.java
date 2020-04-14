import java.util.Scanner;

public class global7c {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt(), k=scan.nextInt();
		int[] a=new int[n];
		long sum=0L;
		int prev=-1;
		long ways=1L;

		for(int i=0;i<n;i++) {
			a[i]=scan.nextInt();
			if(a[i]>(n-k)) {
				sum+=a[i];
				if(prev!=-1) {
					ways=(ways*(i-prev))%MOD;
				}
				prev=i;
			}
		}
		System.out.println(sum+" "+ways);
	}
	static final int MOD=998244353;
}
