//https://vjudge.net/contest/487982?fbclid=IwAR3jtdgUMav5x4C9k7OdQaIOyAqcjlsJoZ2CPGTX6wTnvnVmUHjeOKd8zNc#problem/G

import java.util.Scanner;
import java.text.DecimalFormat;
public class NationalFlag {
  public static void main(String[] args) {
    double a1, a2, w, r, x;
    Scanner in = new Scanner(System.in);
    DecimalFormat formatter = new DecimalFormat("######.##");
    int t = in.nextInt();
    double[] L = new double[t];
    for (int i = 0; i < t; i++) {
      L[i] = in.nextDouble();
    }
    for (int i = 0; i < t; i++) {
      w = 0.6 * L[i];
      r = 0.2 * L[i];
      x = Math.acos(-1);
      a1 = x * r * r;
      a2 = (w * L[i]) - a1;
      System.out.println(formatter.format(a1)+" "+formatter.format(a2));
    }
    in.close();
  }
}
