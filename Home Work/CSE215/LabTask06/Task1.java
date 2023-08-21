import java.util.Scanner;
public class Task1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the value of n: ");
        int n = in.nextInt(), count =0 ;
        int[] arr = new int[n];
        System.out.println("Insert the elements of the array: ");
        for (int i=0; i<n; i++){
            arr[i]= in.nextInt();
        }
        // Sum of the Array
        int sum =0;
        for (int i = 0; i < n; i++) {
            sum+=arr[i];
        }
        double avg = sum*1.0/ n;
        for (int i = 0; i < n; i++) {
            if (arr[i] > avg) {
                System.out.print(arr[i]+" ");
                count++;
            }
        }
        System.out.println("\n"+(count*100.0)/n+"%");
        in.close();
    }
}
