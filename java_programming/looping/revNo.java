public class revNo {
    public static void main(String[] args){
        int n= 1234;
        int rem=0;
        while(n!=0){
            rem= rem*10 + (n%10);
            n/=10;
        }
        System.out.println(rem);

    }
    
}
