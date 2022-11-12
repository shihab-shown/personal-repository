import java.util.*;
public class Question4{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the side of the Hexagon: ");
    int side = in.nextInt();
    double area = (3*Math.sqrt(3)*side*side)/2;
    System.out.printf("Area: %.3f\n",area);
    in.close();
  }
}