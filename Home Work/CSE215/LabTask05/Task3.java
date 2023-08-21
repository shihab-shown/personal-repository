import java.util.Scanner;

public class Task3 {
    public static void main(String[] args) {
        System.out.println("Enter a number: ");
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        System.out.println((isPrime(num))?"Prime":"Not Prime");
        in.close();
    }
    public static boolean isPrime(int a){
        if(a==0 || a==1) return false;
        for (int i =2; i<=a/2; i++){
            if (a%i==0){
                return false;
            }
        }
        return true;
    }
}
