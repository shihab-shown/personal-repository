import java.util.*;
public class Question2{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the number: ");
    int number = in.nextInt(), sum = 0;
    while (number>0) {
      sum += number%10;
      number /= 10;
    }
    System.out.println("Sum = "+sum);
    in.close();
  }
}