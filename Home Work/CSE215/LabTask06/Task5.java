import java.util.Scanner;
public class Task5 {
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
        sumOfCol(arr);
    }
    public static void sumOfCol(int[][] arr) {
        int[] sum = new int[arr.length];
        for (int i=0; i<arr[0].length; i++){
            sum[i]=0;
            for (int j = 0; j < arr.length; j++) {
                sum[i]+=arr[j][i];
            }
        }
        for(int i=0; i<sum.length;i++){
            System.out.println("Sum of column of "+(i+1)+" is "+sum[i]);
        }
    }
}