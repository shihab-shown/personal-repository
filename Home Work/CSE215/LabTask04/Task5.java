import java.util.*;

public class Task5 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter a character: ");
    char ch = in.next().charAt(0);
    ch = Character.toLowerCase(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      System.out.println("Vowel");
    else
      System.out.println("Consonant");

    in.close();
  }
}