import java.util.Scanner;
public class Slogan {
  public static void main(String[] args) {
    String[][] str1 = new String[100][100];
    //String[][] str2 = new String[100][100];
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    in.nextLine();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 2; j++) {
        str1[i][j] = in.nextLine();
      }
    }
    int q = in.nextInt();
    in.nextLine();
    String[] str2 = new String[q];
    for (int i = 0; i < q; i++) {
      str2[i] = in.nextLine();
    }
    for(int i=0; i<q; i++){
      for(int j=0; j<n; j++){
        if (str2[i].equals(str1[j][0])) {
          System.out.println(str1[j][1]);
        }
      }
    }
    in.close();
  }
}
