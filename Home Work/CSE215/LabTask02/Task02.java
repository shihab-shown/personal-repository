import java.util.Scanner;
public class Task02 {
    public static void main(String[] args) {
        Scanner in =  new Scanner(System.in);
        System.out.println("Enter the Year: ");
        int year = in.nextInt();
        if ((year%4==0) && (year%100!=0) || (year%400==0)){
            System.out.println("Leap year");
        } else {
            System.out.println("Not Leap Year");
        }
        in.close();
    }
}
