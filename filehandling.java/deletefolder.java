import java.io.File;
public class deletefolder {
    public static void main(String[] args) {
        File folder=new File("C:/Users/user/Desktop/TAP/Training");
        if(folder.delete()){
            System.out.println("folder deleted successfully");
        }
        else{
            System.out.println("folder doesnt exist"); //DOESNT DELETE THE FOLDER IF FILES EXIST
        }
    }
}
