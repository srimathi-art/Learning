import java.util.*;

public class methodoverloaddemo{
    static int add(int a, int b) {
    int c= a+b;
    return c;
}
   static int add(int a, int b, int c){
    int d = a + b + c;
    return d;
   }

   public static void main (String[] args){
    System.out.println("sum of 2 numbers: "+ add(4,6));
    System.out.println("Sum of 3 numbers: " + add(4,5,6));

   }
}
