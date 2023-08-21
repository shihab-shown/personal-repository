import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //Circle c1 = new Circle(7);
        //printResult(c1);
//        System.out.println("Area: "+c1.getArea());
//        System.out.println("Perimeter: "+c1.getPerimeter());
        //Circle c2 = new Circle();
        //printResult(c2);
        //c2.setRadius(3);
        //printResult(c2);
//        System.out.println("Area: "+c2.getArea());
//        System.out.println("Perimeter: "+c2.getPerimeter());
        Circle[] b = new Circle[3];
        for (int i = 0; i < 3; i++) {
            b[i] = new Circle();
            System.out.print("Enter radius of Circle " + (i + 1));
            b[i].setRadius((in.nextDouble()));
            System.out.println(b[i]);

            //printResult(b[i]);

        }

    }

    public static void printResult(Circle c) {
        System.out.println("Radius: " + c.getRadius());
        System.out.println("Area: " + c.getArea());
        System.out.println("Perimeter: " + c.getPerimeter());
        System.out.println();
    }

}