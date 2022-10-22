import java.util.Scanner;
public class Task3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        System.out.println("Insert the elements of the array: ");
        for (int i=0; i<n; i++){
            arr[i]= in.nextInt();
        }
        int min = findMinElement(arr);
        int max  = findMaxElement(arr);
        System.out.println("Smallest element is: "+min+" Largest element is: "+max);
    }
    public static int findMinElement(int[ ] arr){
        int min = arr[0];
        for (int i = 1; i< arr.length; i++){
            if (arr[i]<min) {
                arr[i]=min;
            }
        }
        return min;
    }
    public static int findMaxElement(int[ ] arr){
        int max =arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i]>max) {
                max = arr[i];
            }
        }
        return max;
    }
}
