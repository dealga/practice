import java.io.FileWriter;
import java.io.IOException;
public class writetotextfile {
    public static void main(String[] args) throws IOException {
        FileWriter writer = new FileWriter("C:\\Users\\user\\Desktop\\TAP\\Training\\demo.txt", 
        
        true);   // by default append = false, so by adding true at the end, append=true
        writer.append("\nhelo all");
        writer.close();
    }
}
