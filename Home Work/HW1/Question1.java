import java.util.Scanner;
public class Question1 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter Radius: ");
    int radius = in.nextInt();
    System.out.println("Enter Length: "); 
    int length = in.nextInt();
    double PI = Math.acos(-1);
    System.out.printf("Area: %.3f\nVolume: %.3f\n",(radius*radius*PI),(radius*radius*PI*length));
    in.close();
  }
}
