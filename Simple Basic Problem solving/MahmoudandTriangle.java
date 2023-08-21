import java.util.Arrays;
import java.util.Scanner;

public class MahmoudandTriangle{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int[] arr = new int[n];
    for(int i=0; i<n; i++){
      arr[i] = in.nextInt();
    }
    Arrays.sort(arr);
    int a,b,c,ctr=0;
    for(int i=0; i<n-2; i++){
      //System.out.println(arr[i]);
      a = arr[i];
      b = arr[i+1];
      c = arr[i+2];
      if(a+b>c && b+c>a && a+c>b)
      {
        System.out.println("YES");
        ctr++;
        break;
      }
    }
    if (ctr==0) {
      System.out.println("NO");
    }
    in.close();
  }
}
