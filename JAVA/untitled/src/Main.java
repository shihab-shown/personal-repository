import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a=0,b=0,count=0;

        for(int i=0;i<n;i++)
        {
            a = input.nextInt();
            b = input.nextInt();
            for (int j=a;j<=b;j++){
                if(String.valueOf(j).contains("0")){
                    count++;
                }
            }
            System.out.println(count + "/" + (b-a+1));
        }

        input.close();

        }

    }
