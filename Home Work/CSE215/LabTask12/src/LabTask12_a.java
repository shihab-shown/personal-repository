import java.util.Scanner;

public class LabTask12_a {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] num = new int[5];
        int i = 0, count = 0;
        while (i < 5) {
            System.out.println("Enter Positive int: " + (i + 1) + ": ");
            num[i] = in.nextInt();
            try {
                if (num[i] < 0) {
                    throw new Exception("Integer cannot be negative");
                }
                if (num[i] % 2 == 0) {
                    count++;
                }
            } catch (Exception exception) {
                System.out.println(exception);
                System.out.println("Enter Positive int: " + (i + 1) + ": ");
                num[i] = in.nextInt();
                if (num[i] % 2 == 0) {
                    count++;
                }
            }
            i++;
        }

        System.out.println("Total even count: " + count);
    }
}