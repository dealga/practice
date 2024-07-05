import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
public class readtextfile {
    public static void main(String[] args) throws FileNotFoundException{
        File file = new File("C:\\Users\\user\\Desktop\\TAP\\Training\\demo.txt");
        Scanner reader=new Scanner(file);
        while (reader.hasNext()){
            String data=reader.next();
            System.out.println(data + " ");
        }

    }
}
