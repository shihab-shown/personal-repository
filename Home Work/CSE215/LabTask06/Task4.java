import java.util.*;
public class Task4 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter number of row: ");
        int row = in.nextInt();
        System.out.println("Enter number of column: ");
        int col = in.nextInt();
        int[][] arr = new int[row][col];
        System.out.println("Insert the elements of the array: ");
        for (int i=0; i<row; i++){
            for (int j = 0; j < col; j++) {
                arr[i][j]= in.nextInt();
            }
        }
        int index=sumOfRow(arr);
        System.out.println(index);
        in.close();
    }
public static int sumOfRow(int[][] arr) {
        int[] sum = new int[arr.length];
        for (int i=0; i<arr.length; i++){
            sum[i]=0;
            for (int j = 0; j < arr[0].length; j++) {
                sum[i]+=arr[i][j];
            }
        }
        int max = sum[0], index=0;
        for(int i=1; i<sum.length; i++){
            if (sum[i]>max) {
                max= sum[i];
                index = i;
            }
        }
        return index+1;
    }
}