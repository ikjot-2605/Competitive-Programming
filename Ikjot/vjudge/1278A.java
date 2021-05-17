import  java.util.*;
public class b_25_3{
public static void main(String args[]){
Scanner in=new Scanner(System.in);
String a,b;
int test=in.nextInt();
while(test-->0){
a=in.next();
b=in.next();
int al=a.length();
int bl=b.length();
boolean flag=false;
char[] a1=a.toCharArray();
Arrays.sort(a1);
for(int i=0;i<=bl-al;i++){
String s=b.substring(i,i+al);
char[] d=s.toCharArray();
Arrays.sort(d);
if(Arrays.equals(a1,d)){
flag=true;
break;
}

}
if(flag){
System.out.println("YES");
}else{
System.out.println("NO");
}
}


}


}
