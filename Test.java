import java.util.Scanner;
public class Test{
  public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      String s = in.nextLine();
      int a = parseInt(s);
      System.out.println(a);
    }
    public static int parseInt(String s) {
      int[] a = new int[s.length()];
      for(int i=(s.length() -1); i>=0; i--){
        switch (s.charAt(i)) {
          case '0':
            a[i] = 0;
            break;
          case '1':
            a[i] = 1;
            break;
          case '2':
            a[i] = 2;
            break;
          case '3':
            a[i] = 3;
            break;
          case '4':
            a[i] = 4;
            break;
          case '5':
            a[i] = 5;
            break;
          case '6':
            a[i] = 6;
            break;
          case '7':
            a[i] = 7;
            break;
          case '8':
            a[i] = 8;
            break;
          case '9':
            a[i] = 9;
            break;
          default:
            break;
        }
      }
      int j= 0 ,x, sum=0;
      for(int i= (a.length -1); i >= 0; i--){
        x = (int)(Math.pow(10, i));
        sum+=x*a[j];
        j++;
      }
      return sum;
    }
  }
