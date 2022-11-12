import java.util.*;
public class Question3{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the minutes: ");
    int minutes = in.nextInt();
    double hour = minutes/60;
    double day = hour/24;
    double year = day/365;
    day = (year - Math.floor(year))*365;
    System.out.printf("%.0f Years and %.0f Days\n",Math.floor(year),Math.floor(day));
    in.close();
  }
}