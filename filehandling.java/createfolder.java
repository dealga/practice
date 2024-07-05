import java.io.File;
public class createfolder {
    public static void main(String[] args) {
        File folder=new File("C:/Users/user/Desktop/TAP/Training");
        if(folder.mkdir()){
            System.out.println("folder created successfully");
        }
        else{
            System.out.println("folder already exists");
        }
    }
}
