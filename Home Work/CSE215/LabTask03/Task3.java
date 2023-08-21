import java.util.Scanner;

public class Task3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the Number: ");
        int num = in.nextInt(), count = 0;
        if (num == 0 || num == 1) {
            count = 1;
        }
        for (int i = 2; i < num - 1; i++) {
            if (num % i == 0) {
                count = 1;
                break;
            }
        }
        if (count == 1) {
            System.out.println("Not Prime");
        } else {
            System.out.println("Prime");
        }
        in.close();
    }
}
