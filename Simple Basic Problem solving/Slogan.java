import java.util.Scanner;

public class Slogan {
  public static void main(String[] args) {
    String[][] str = new String[100][100];
    String[][] str2 = new String[100][100];
    Scanner in = new Scanner(System.in);
    String loli;
    int n = in.nextInt();
    String lol = in.nextLine();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 2; j++) {
        str[i][j] = in.nextLine();
      }
    }
    int q = in.nextInt();
    loli = in.nextLine();
    for (int i = 0; i < q; i++) {
      str2[i][0] = in.nextLine();
    }
    for(int i=0; i<q; i++){
      for(int j=0; j<q; j++){
        if (str2[i][0].equals(str[j][0])) {
          System.out.println(str[i][1]);
        }
      }
    }
    // for(int i=0; i<n; i++){
    //   for(int j=0; j<2; j++)
    //   {
    //     System.out.println(str[i][1]);
    //   }
    // }
    in.close();
  }
}
