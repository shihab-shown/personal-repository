import java.util.Scanner;

public class Task2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter year: ");
        int year = in.nextInt();
        switch (year%12){
            case 1:
                System.out.println("monkey");
                break;
            case 2:
                System.out.println("rooster");
                break;
            case 3:
                System.out.println("dog");
                break;
            case 4:
                System.out.println("pig");
                break;
            case 5:
                System.out.println("rat");
                break;
            case 6:
                System.out.println("ox");
                break;
            case 7:
                System.out.println("tiger");
                break;
            case 8:
                System.out.println("rabbit");
                break;
            case 9:
                System.out.println("dragon");
                break;
            case 10:
                System.out.println("snake");
                break;
            case 11:
                System.out.println("horse");
                break;
            case 0:
                System.out.println("sheep");
                break;
        }
        in.close();
    }
}
