import java.util.Scanner;
public class Task2 {
    public static void main(String[] args) {
        System.out.println("Enter the side of the Pentagon: ");
        Scanner in = new Scanner(System.in);
        double side = in.nextDouble();
        System.out.println("Area is: "+areaOfPentagon(side));
        in.close();
    }
    public static double areaOfPentagon(double side){
        return (5*side*side)/(4*Math.tan((Math.acos(-1)/5)));
    }
}
