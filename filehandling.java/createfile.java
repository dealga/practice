import java.io.File;
import java.io.IOException;
public class createfile {
    public static void main(String[] args) throws IOException {
        File file=new File("C:/Users/user/Desktop/TAP/Training/demo1.txt");
        if(file.createNewFile()){
            System.out.println("new file created");
        }
        else{
            System.out.println("file already exists");
        }
    }
}
