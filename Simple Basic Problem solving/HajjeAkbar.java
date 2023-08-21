import java.util.Scanner;

public class HajjeAkbar {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int cse = 0;
    String a = in.nextLine();
    while (!a.equals("*")) {
      cse++;
      if (a.equals("Hajj")) {
        System.out.println("Case "+cse+": Hajj-e-Akbar");
      } else if(a.equals("Umrah")){
        System.out.println("Case "+cse+": Hajj-e-Asghar");
      }
      a = in.nextLine();
    }
    in.close();
  }
}
