import java.util.Scanner;

public class LabTask12_b {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter three sides of the triangle: ");
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        try {
            Triangle triangle = new Triangle(a,b,c);
            System.out.println("Area: "+triangle.getArea());
            System.out.println("Perimeter: "+triangle.getPerimeter());
        } catch (IllegalTriangleException e) {
            System.out.println(e);
        }

    }
}