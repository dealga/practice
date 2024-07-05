public class exceptions2 {
    final int x = 20;
    // x = 30; Not Allowed
    void display(){
        System.out.println("JIT");
    }
    {
        System.out.println("IIB 2");
    }
    public static void main(String[] args) {
        new exceptions2().display();
        int i, j, k=0;
        try {
            i = 10;
            j = 10;
            k = i / j;
            int[] arr = {1,2,3,4,5};
            System.out.println(arr[9]);
        }
        catch (ArithmeticException | ArrayIndexOutOfBoundsException e){
            System.out.println("Exception Occurred..!!");
        }
        catch (Exception e){
            System.out.println("Something unexpected happened..!!");
        }
        finally {
            System.out.println("End of execution..!!");
        }
        System.out.println("The value of k is: " + k);
    }
    static {
        System.out.println("Start of execution..!!!");
    }
    {
        System.out.println("IIB 1");
    }
}