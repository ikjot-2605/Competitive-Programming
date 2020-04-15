/*
@author ikjot
*/
import java.util.Scanner;
 
public class Main{
 
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
			int n = sc.nextInt(), a[] = new int[n],b[] = new int[n],d=0;
			boolean c = true,e=false;
			for(int i=0;i<n;i++)a[i]=sc.nextInt();
			
			for(int i=0;i<n;i++)
			{
				int aux = sc.nextInt();
				if(aux >a[i])
				{
					//System.out.println(aux +" "+a[i]+" "+d);
					if(d==0)d = aux-a[i];
					else
					{
						if(d!=aux-a[i] || e)c=false;
						else d = aux-a[i];
					}
				}
				else if (aux<a[i])c =false;
				else
				{
					if(d!=0)e=true;
				}
			}
			if(c)System.out.println("YES");
			else System.out.println("NO");
		}
	}
 
}