import java.util.Scanner;

public class Task2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter x and p: ");
        int x = in.nextInt();
        int p = in.nextInt();
        int result = 1;
        for (int i=1; i<=p; i++){
            result = x*result;
        }
        System.out.println(result);
        in.close();
    }
}
