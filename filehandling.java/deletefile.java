import java.io.File;
import java.io.IOException;
public class deletefile {
    public static void main(String[] args) throws IOException {
        File file=new File("C:/Users/user/Desktop/TAP/Training/demo.txt");
        if(file.delete()){
            System.out.println("file deleted");
        }
        else{
            System.out.println("file doesnt exist");
        }
    }
}
