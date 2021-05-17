import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author ikjot
 */
public class CF_C {
    public static boolean check_palindrome(String s)
  {
    // reverse the given String
    String reverse = new StringBuffer(s).reverse().toString();

    // check whether the string is palindrome or not
    if (s.equals(reverse))
      return true;

    else
      return false;
  }
    public static StringBuffer beginning(String s){
        int l=s.length();
            int same=0;
            //if(s.charAt(0)!=s.charAt(l-1)){System.out.println(start_end(s));continue;}
            //else{
                for(int i=0;i<l/2;i++){
                    if(s.charAt(i)==s.charAt(l-i-1)){
                       same++;


                    }
                    else{break;}



                }
                 char start=s.charAt(same);
                 int la=0;
                 String to_add="";
                for(int i=same;i<l-same;i++){
                   if(s.charAt(i)==start){if(check_palindrome(s.substring(same,i+1))){ to_add=s.substring(same,i+1);}}

                }
                StringBuffer ans=new StringBuffer();
                ans.append(s.substring(0,same));
                ans.append(to_add);
                ans.append(s.substring(l-same,l));
                //if(ans.length()>start_end(s).length())System.out.println(ans);
                //else System.out.println(start_end(s));
                return (ans);

    }
    public static StringBuffer ending(String s){
        int l=s.length();
            int same=0;
            //if(s.charAt(0)!=s.charAt(l-1)){System.out.println(start_end(s));continue;}
            //else{
                for(int i=0;i<l/2;i++){
                    if(s.charAt(i)==s.charAt(l-i-1)){
                       same++;


                    }
                    else{break;}



                }
                 char start=s.charAt(l-1-same);
                 int la=0;
                 String to_add="";
                for(int i=l-1-same;i>=same;i--){
                   if(s.charAt(i)==start){if(check_palindrome(s.substring(i,l-same))){ to_add=s.substring(i,l-same);}}

                }
                StringBuffer ans=new StringBuffer();
                ans.append(s.substring(0,same));
                ans.append(to_add);
                ans.append(s.substring(l-same,l));
                //if(ans.length()>start_end(s).length())System.out.println(ans);
                //else System.out.println(start_end(s));
                return (ans);

    }
   /* public static String start_end(String s){
        char start_c=s.charAt(0);
        int max_length_start=0;
        int max_length_end=0;
        String max_start=new String();
        String max_end=new String();
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s.charAt(i)==start_c){if(check_palindrome(s.substring(0, i))){max_length_start=i+1;max_start=s.substring(0, i+1);}}
        }
        int end_c=s.charAt(l-1);

        for(int i=0;i<l;i++){
            if(s.charAt(l-1-i)==start_c){if(check_palindrome(s.substring(l-i-1, l-1))){max_length_end=i+1;max_end=s.substring(l-i-1, l-1);}}
        }
        if(max_length_start<max_length_end)return(max_end);
        else return(max_start);
    }*/
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();

            if(beginning(s).length()<ending(s).length()){System.out.println(ending(s));}
            else System.out.println(beginning(s));
        }
    }

}
