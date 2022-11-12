import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
public class Redundancy {
  public static void main(String[] args) throws NumberFormatException, IOException  {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String s;
    int count;
    while ((s = br.readLine()) != "\r") {
      String[] line = s.split(" ");
      int[] a = new int[line.length];
      for (int i = 0; i < line.length; i++) {
        a[i] = Integer.parseInt(line[i]);
      }
      int n = a.length;
      boolean[] arr = new boolean[n];
      Arrays.fill(arr, false);
      for (int i = 0; i < n; i++) {
        if (arr[i] == true)
          continue;
        count = 1;
        for (int j = i + 1; j < n; j++) {
          if (a[i] == a[j]) {
            arr[j] = true;
            count++;
          }
        }
        System.out.println(a[i] + " " + count);
      }
      break;
    }
  }
}
