import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        Scanner in = new Scanner(System.in);
        Cars cars1 = new Cars();
        // Cars cars2 = new Cars();
        cars1.name = in.nextLine();
        cars1.speed = in.nextInt();
        Human human1 = new Human("Morty", 69);
        
        // System.out.println(cars1.name);
        // System.out.println(cars2.milage());
        // System.out.println(human1.name+human1.eat());
        System.out.println(human1.age);
        // System.out.println(human2.name+human1.eat());
        // human2.drink();
        human1.drive();
    }
}
