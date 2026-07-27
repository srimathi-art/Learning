import java.util.*;

public class factorial {
    public static void main(String[] args){
        int n=5;
        int fact;
        for (fact= 1; fact <= n; fact++){
            fact*=fact;
        }
        System.out.println(fact);
    }    
}
