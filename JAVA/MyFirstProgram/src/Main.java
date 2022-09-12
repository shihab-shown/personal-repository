import java.util.Scanner;

public class Main {

	@SuppressWarnings("resource")
	public static void main(String[] args) {

		System.out.println("Hello World");
		System.out.print("I love pizza");
		Scanner scanner = new Scanner(System.in);
		System.out.println("What is your name?");
		String name = scanner.nextLine();
		System.out.println("Name " + name);
		System.out.println();
		int age = scanner.nextInt();
		System.out.println("Age is" + age);

	}

}
