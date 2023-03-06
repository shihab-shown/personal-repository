import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter password: ");
        String password = sc.nextLine();
        if (isValidPassword(password)) {
            System.out.println("Valid password");
        } else {
            System.out.println("Invalid password");
        }
    }
    public static boolean isValidPassword(String password) {
        if (password.length() < 6) {
            return false;
        }
        if (!Character.isDigit(password.charAt(password.length() - 1))) {
            return false;
        }
        boolean hasDigit = false;
        boolean hasLetter = false;
        for (int i = 0; i < password.length() ; i++) {
            if (Character.isDigit(password.charAt(i))) {
                hasDigit = true;
            }
            if (Character.isLetter(password.charAt(i))) {
                hasLetter = true;
            }
        }
        return hasDigit && hasLetter;
    }
}