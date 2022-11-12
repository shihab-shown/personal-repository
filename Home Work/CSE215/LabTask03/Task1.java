public class Task1 {
    public static void main(String[] args) {
        int num1 = (int)(Math.random()*10);
        int num2 = (int)(Math.random()*10);
        int num3 = (int)(Math.random()*10);
        System.out.println(num1);
        System.out.println(num2);
        System.out.println(num3);
        if(num1<num2 && num1<num3){
            System.out.println(num1+" is the smallest"); 
        } else if (num2<num3) {
            System.out.println(num2+" is the smallest");
        } else {
            System.out.println(num3+" is the smallest");
        }
    }
}
