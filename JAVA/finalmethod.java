public class finalmethod {
    final void college(){
        System.out.println("JIT");
    }
}
class College extends finalmethod{
    void college(){ // Not allowed
//        System.out.println("MIT");
    }
}