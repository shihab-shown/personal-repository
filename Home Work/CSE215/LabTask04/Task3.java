import java.util.*;

public class Task3 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter a and b: ");
    int a = in.nextInt();
    int b = in.nextInt();
    for (int i = a; i <= b; i++) {
      for (int j = 1; j <= 10; j++) {
        System.out.println(j + "x" + i + "=" + (j * i));
      }
    }
    in.close();
  }
}
