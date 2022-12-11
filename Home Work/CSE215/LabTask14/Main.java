import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter base and height for the triangle: ");
        Triangle triangle = new Triangle(in.nextDouble(),in.nextDouble());
        System.out.println("Enter length and width for the rectangle: ");
        Rectangle rectangle = new Rectangle(in.nextDouble(), in.nextDouble());
        System.out.println("Triangle: "+triangle);
        System.out.println("Rectangle: "+rectangle);
    }
}