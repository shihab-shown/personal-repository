import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        int[] arr = new int[T];
        in.nextLine();
        for (int i = 0; i < T; i++) {
            arr[i] = in.nextInt();
        }
        int res, rem, reverse;
        for(int i=0; i<T ; i++){
            reverse=0;
            res=arr[i];
            while (res!=0) {
                rem=res%10;
                res=res/10;
                reverse = rem+(reverse*10);
            }
            System.out.println(reverse);
        }
    }
}
