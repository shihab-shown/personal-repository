import java.util.Scanner;
public class Task2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter n:");
        int n = in.nextInt();
        int[] arr = new int[n];
        System.out.println("Insert the elements of the array: ");
        for (int i=0; i<n; i++){
            arr[i]= in.nextInt();
        }
        System.out.println("Enter the search key: ");
        int key = in.nextInt();
        int index = findElement(arr, key);
        System.out.println(key+" found in index "+index);
        in.close();
    }

    public static int findElement(int[] arr, int key){
        for (int i = 0; i< arr.length; i++){
            if (arr[i]==key){
                return i+1;
            }
        }
        return 0;
    }
}

