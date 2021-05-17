import java.util.*;

public class d_25_3 {

	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);
		int t = in.nextInt();

		for(int i = 0; i < t; ++i) {
			String s = in.next();
			String c = in.next();

			char[] arr = s.toCharArray();
			char[] ans = s.toCharArray();
			Arrays.sort(arr);

			for(int j = 0; j < s.length(); ++j) {
				if(s.charAt(j) != arr[j]) {
					swap(ans,s.lastIndexOf(arr[j]),j);
					break;
				}
			}
			String o = new String(ans);
			if(o.compareTo(c) < 0) {
				System.out.println(o);
			} else {
				System.out.println("---");
			}
		}

	}

	static void swap(char[] a, int i, int j) {
		char tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
