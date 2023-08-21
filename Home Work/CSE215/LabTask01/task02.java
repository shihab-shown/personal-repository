public class task02 {
  public static void main(String[] args) {
    double PI = Math.acos(-1);
    double radius = 5.5;
    double perimeter = 2 * radius * PI;
    double area = radius * radius * PI;
    System.out.printf("Perimeter is: %.2f\nArea is: %.2f\n",perimeter,area);
  }
}
