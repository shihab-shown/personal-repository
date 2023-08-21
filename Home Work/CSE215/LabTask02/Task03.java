import java.util.Scanner;

public class Task03 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Length: ");
        int length = in.nextInt();
        System.out.println("Enter Width: ");
        int width = in.nextInt();
        if (length == width)
            System.out.println("Square");
        else
            System.out.println("Not Square");
        in.close();    
    }
}
