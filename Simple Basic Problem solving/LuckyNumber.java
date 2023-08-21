import java.util.Scanner;
public class  LuckyNumber {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    long n=in.nextLong();
    int ctr=0;
    while (n!=0) {
      n=n/10;
      if (n%10==4 || n%10==7) {
        continue;
      }else{
        ctr++;
        break;
      }
    }
    if (ctr==0) {
      System.out.print("YES");
    } else {
      System.out.print("NO");
    }
    in.close();
  }
}
