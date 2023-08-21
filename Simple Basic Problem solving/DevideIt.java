import java.util.Scanner;
public class DevideIt{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int q = in.nextInt();
    int ctr=0;
    long[] n = new long[q];
    for(int i=0; i<q; i++){
      n[i] = in.nextLong();
    }
    for(int i=0; i<q; i++){
      while (n[i]!=1) {
        if (n[i]%2==0) {
          n[i]=n[i]/2;
          ctr++;
        }else if (n[i]%3==0) {
          n[i]= (2*n[i])/3;
          ctr++;
        }else if (n[i]%5==0) {
          n[i]=(4*n[i])/5;
          ctr++;
        }else{
          ctr=-1;
          n[i]=1;
        }
      }
      System.out.println(ctr);
      ctr=0;
    }
    in.close();
  }
}
