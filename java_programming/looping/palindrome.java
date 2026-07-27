import java.util.*;
public class palindrome {
    static void palindrome(int n,int rev){
        if (n == rev){
            System.out.println(n+ " is palindrome");
        }
        else{
            System.out.println(n+" is not a palindrome");
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = sc.nextInt();
        int original = n;
        int rev=0;
        while(n!=0){
            rev = rev*10 +(n%10);
            n/=10;
        }
        palindrome(original,rev);
        
}}
