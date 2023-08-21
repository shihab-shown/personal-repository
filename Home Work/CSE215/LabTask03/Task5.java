import java.util.*;

public class Task5 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the number: ");
    int num = in.nextInt(), remainder, sum = 0;
    int temp = num;
    for (int i = 0; i < 3; i++) {
      remainder = num % 10;
      sum = (sum * 10) + remainder;
      num /= 10;
    }
    if (sum == temp) {
      System.out.println("Palindrome");
    } else {
      System.out.println("Not Palindrome");
    }
    in.close();
  }
}