import java.util.Scanner;
public class Task04 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the Coefficients of the Quadratic Equation: ");
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        double x1 ,x2, real, imaginary, d = ((b*b) - (4*a*c));
        if(d > 0){
            x1 = ((b* -1.0) + Math.sqrt(d))/(2.0 * a);
            x2 = ((b* -1.0) - Math.sqrt(d))/(2.0 * a);
            System.out.println("x1= "+x1+"\nx2= "+x2);
        } else if (d == 0) {
            x1 = (b * -1.0)/(2.0 * a);
            x2 = x1;
            System.out.println("x1= "+x1+"\nx2= "+x2);
        } else {
            real = (b * -1.0)/(2.0 * a);
            imaginary = Math.sqrt(-1.0 * d)/(2.0 * a);
            System.out.printf("x1= %.2f+%.2fi\nx2= %.2f-%.2fi\n",real,imaginary,real,imaginary);
        }
        in.close();
    }
}
