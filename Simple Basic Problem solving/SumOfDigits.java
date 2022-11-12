import java.util.Scanner;

public class SumOfDigits {

  public static void main(String[] args) {
    
    int T,N;
    Scanner in= new Scanner(System.in);
    T = in.nextInt();
    int [] arr= new int[T];
    for(int i=0; i<T; i++){
      arr[i]= in.nextInt();
    }
    for(int i=0; i<T; i++){
      N = sumOfDigits(arr[i]);
      System.out.println(N);
    }
    in.close();
  }
  static int sumOfDigits(int a){
    int rem,sum=0;
    int res=a;
    while (res!=0) {
      rem=res%10;
      res=res/10;
      sum=sum+rem;
    }
    return sum;
  }
}
