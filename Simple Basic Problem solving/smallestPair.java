import java.util.Arrays;
import java.util.Scanner;

public class smallestPair {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int t = in.nextInt();
    int n;
    for(int i=0; i<t; i++){
      n = in.nextInt(); 
      int[] a = new int[n];
      for(int j=0; j<n; j++){
        a[j] = in.nextInt();
      }
      Arrays.sort(a);
      System.out.println(a[0]+a[1]);
    }
    in.close();
  }
}
