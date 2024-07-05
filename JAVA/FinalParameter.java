public class FinalParameter {
    static void print(final int x){
       // x = 20; // Invalid
        System.out.println(x);
    }

    public static void main(String[] args) {
        print(10);
    }
}