public class E1 {
    public static void main(String[] args) {
        int i, j, k=0;
        try {
            i = 10;
            j = 10;
            k = i / j;
            int[] arr = {1,2,3,4,5};
            System.out.println(arr[9]);
        }
        catch (ArithmeticException e){
            e.printStackTrace(); // Details of exception
            System.out.println("Invalid Zero Division");
        }
        catch (ArrayIndexOutOfBoundsException e){
            System.out.println("Invalid Index");
        }
        System.out.println("The value of k is: " + k);
    }
}