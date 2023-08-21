import java.util.*;
public class Task5{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter a String: ");
    String str = in.nextLine();
    System.out.println("There are "+countUppercaseLetters(str)+" Uppercase letters and "+countLowercaseLetters(str)+" Lowercase letters in this string.");
    in.close();
  }
  public static int countLowercaseLetters(String s1) {
    int count=0;
    for(int i=0; i<s1.length(); i++){
      if(Character.isLowerCase(s1.charAt(i))){
        count++;
      }
    }
    return count;
  }
  public static int countUppercaseLetters(String s1) {
    int count=0;
    for(int i=0; i<s1.length(); i++){
      if(Character.isUpperCase(s1.charAt(i))){
        count++;
      }
    }
    return count;
  }
}