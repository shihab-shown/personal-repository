import java.util.Scanner;

public class Task4 {
    public static void main(String[] args) {
        System.out.println("Enter two numbers: ");
        Scanner in = new Scanner(System.in);
        int num1 = in.nextInt();
        int num2 = in.nextInt();
        System.out.println("GCD is "+findGCD(num1, num2));
        in.close();
    }
    public static int findGCD(int a, int b){
        int gcd=1;
        for(int i=1; i<=a && i<=b; i++){
            if (a%i==0 && b%i==0) {
                gcd=i;
            }
        }
        return gcd;
    }
}
