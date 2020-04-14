
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class TuxCoder {
	static Scanner scan=new Scanner(System.in);
	public static void main(String[] args) {
		int n=scan.nextInt();
		int k=scan.nextInt();
		Set<String>set=new HashSet<>();
		String s[]=new String[n];
		for(int i=0;i<n;i++) {
			String str=scan.next();
			s[i]=str;
			set.add(str);
		}
		int ans=0;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				String str1=s[i];
				String str2=s[j];
				String str3="";
				for(int a=0;a<k;a++) {
					char ch1=str1.charAt(a);
					char ch2=str2.charAt(a);
					if(ch1==ch2)str3+=(ch1);
					else str3+=(char)('S'+'T'+'E'-ch1-ch2);
				}
				if(set.contains(str3))ans++;
			}
		}
		System.out.println(ans/3);
	}
}
