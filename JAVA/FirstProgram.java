import java.io.InputStream;
import java.util.Scanner;

/**
 * FirstProgram
 */
public class FirstProgram {

  public static void main(String[] args) {
    System.out.println("Name: ");
    Scanner input = new Scanner(System.in);
    String name;
    name=input.nextLine();
    int age=input.nextInt();
    input.nextLine();
    String food=input.nextLine();
    System.out.println(name);
    System.out.println("Age "+age);
    System.out.println("Food "+food);
  }
}