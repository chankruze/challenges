import java.util.*;
 
public class Batman {
    public static void main(String[] args) {
        // new scanner instance
        Scanner scanner = new Scanner(System.in);
        // read and save integer to vriable
        int criminals = scanner.nextInt();
        // string to print
        String message = "";
        // logic
        if (criminals < 5){
           message = "I got this!";
        } else if (criminals < 10) {
           message = "Help me Batman";
        } else {
           message = "Good Luck out there!";
        }
        // print message
        System.out.println(message);
    }
}
