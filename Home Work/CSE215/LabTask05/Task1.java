public class Task1 {
    public static void main(String[] args) {
        printYearStatus();
    }
    public static void printYearStatus(){
        int year = (int)(1995+Math.random()*(2022-1995+1));
        System.out.println(year);
        if((year%4==0 && year%100!=0) || (year %400==0)){
            System.out.println("Leap year");
        }
        else {
            System.out.println("Not Leap year");
        }
    }
}

