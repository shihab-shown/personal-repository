import java.util.Scanner;
public class SoftDrinking{
  public static void main(String[] args) {
    int n,k,l,c,d,p,nl,np;
    Scanner in = new Scanner(System.in);
    n = in.nextInt();
    k = in.nextInt();
    l = in.nextInt();
    c = in.nextInt();
    d = in.nextInt();
    p = in.nextInt();
    nl = in.nextInt();
    np = in.nextInt();
    int x = (k*l)/nl;
    int y = (c*d);
    int z = p/np;
    int result = minimum(x,y,z);
    int r = result/n;
    System.out.println(r);
    in.close();
  }
  static int minimum(int a, int b, int c){
    if (a<b && a<c) {
      return a;
    } else if(b<c){
      return b;
    } else{
      return c;
    }
  }
}