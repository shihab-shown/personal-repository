import java.util.Scanner;
public class ValidTriangles{
    public static void main(String[] args) {
    int T, A, B, C;
    Scanner in = new Scanner(System.in);
    T= in.nextInt();
    boolean[] arr = new boolean[T];
    for(int i=0; i<T; i++){
      A=in.nextInt();
      B=in.nextInt();
      C=in.nextInt();
      arr[i]= validTriangle(A,B,C);
    }
    for(int i=0; i<T; i++){
      if (arr[i]== true) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }
    }
    in.close();
  }
  static boolean validTriangle(int a, int b, int c){
    int sum=0;
    sum=a+b+c;
    if (sum==180 && a!=0 && b!=0 && c!=0) {
      return true;
    } else {
      return false;
    }
  }
}