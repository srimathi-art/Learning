class Parent {
    public int sum(int a, int b){
        System.out.println("Parent Class:");
        return a+b;
    }
    
}
 class Child extends Parent{
    @Override
    public int sum(int a, int b){
        System.out.println("Child Class:");
        return a + b;
        
    }
}
public class methodoverride{
    public static void main(String[] args){
        Parent p = new Parent();
        Child c = new Child();
        System.out.println("Result: "+p.sum(4,6));
        System.out.println("REsult: "+c.sum(4,6));


    }
}
