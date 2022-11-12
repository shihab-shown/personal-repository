import java.util.Scanner;
public class Task01 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter three sides of the Triangle: ");
        int side1 = in.nextInt();
        int side2 = in.nextInt();
        int side3 = in.nextInt();
        if ((side1 == side2) && (side2 == side3)){
            System.out.println("Equilateral");
        }
        else if ((side1 != side2) && (side2 != side3) && (side1 != side3)){
            System.out.println("Scalene");
        } else {
            System.out.println("Isoscalene");
        }
        in.close();
    }
}
