import java.util.Scanner;

public class Rough {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String[][] str = new String[10][10];
    str[0][0] = in.nextLine();
    str[0][1] = in.nextLine();
    System.out.println(str[0][1]);
    in.close();
  }
}
