import java.util.Scanner;

public class temp{

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int test=scn.nextInt();
		StringBuilder sb=new StringBuilder();
		for(int i=0;i<4;i++){

		}
		for(int i=0;i<5;i++){

		}
		for(int t=0;t<test;t++){
		int n = scn.nextInt();
		int k = scn.nextInt();
		String s = scn.next();
		int[][] arr = new int[k][26];
		int []cl=new int[k];
		for (int i = 0; i < n;) {
			int l = 0;
			int r = k - 1;

			while (l <= r) {
				char ch = s.charAt(l+i);
				char ch2 = s.charAt(r+i);
				arr[l][ch - 'a']++;
				if(l!=r){
				arr[l][ch2 - 'a']++;}
				cl[l]++;
				if(l!=r){
					cl[l]++;
				}
				l++;
				r--;

			}
			i+=k;
		}
		int cost=0;
		for (int i = 0; i < k; i++) {
			int max=0;
            for(int v=0;v<26;v++){
            	max=Math.max(arr[i][v], max);
            }
            cost+=cl[i]-max;
		}
		sb.append(cost+"\n");}
				for(int i=0;i<5;i++){

		}
		System.out.println(sb);
	}

}
