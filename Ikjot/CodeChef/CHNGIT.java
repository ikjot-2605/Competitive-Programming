import java.util.*;
public class Main {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++){
           int n = sc.nextInt();
           int array[]=new int[n];
           int maximumInt=0;
           for(int j=0;j<n;j++){
               array[j]=sc.nextInt();
               if(array[j]>maximumInt)maximumInt=array[j];
           }
          int countArr[]=new int[maximumInt+1];
           for(int j=0;j<n;j++){
               countArr[array[j]]++;
           }
           int maxOccurence=0;
           int count=0;
           for(int j=0;j<=maximumInt;j++){
               if(countArr[j]>maxOccurence){maxOccurence=countArr[j];count=countArr[j];}
           }
           System.out.println(n-count);
	}
	sc.close();
    }
}
