import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String[][] courseTeacher = new String[4][5];
    String[][] courseTime = new String[4][5];
    int[] studentID = new int[5];
    String[] studentName = new String[5];
    // There will be 4 courses and each of them will have 5 sections
    
    // sections of course 1
    courseTeacher[0][0] = "SAR"; // 1 means teacher SAR
    courseTeacher[0][1] = "Msk1"; // 2 means teacher Msk1
    courseTeacher[0][2] = "AuR"; // 3 means teacher AuR
    courseTeacher[0][3] = "HSM"; // 4 means teacher HSM
    courseTeacher[0][4] = "Sks"; // 5 means teacher Sks
    
    courseTime[0][0] = "8-9:30"; 
    courseTime[0][1] = "1-2:30"; 
    courseTime[0][2] = "2:40-4:10"; 
    courseTime[0][3] = "8-9:30"; 
    courseTime[0][4] = "4:20-5:50"; 

    // sections of course 2
     courseTeacher[1][0] = "SAR"; // 1 means teacher SAR
     courseTeacher[1][1] = "Msk1"; // 2 means teacher Msk1
     courseTeacher[1][2] = "AuR"; // 3 means teacher AuR
     courseTeacher[1][3] = "HSM"; // 4 means teacher HSM
     courseTeacher[1][4] = "Sks"; // 5 means teacher Sks
     
     courseTime[1][0] = "8-9:30"; 
     courseTime[1][1] = "1-2:30"; 
     courseTime[1][2] = "2:40-4:10"; 
     courseTime[1][3] = "8-9:30"; 
     courseTime[1][4] = "4:20-5:50"; 

     // sections of course 3
    courseTeacher[2][0] = "SAR"; // 1 means teacher SAR
    courseTeacher[2][1] = "Msk1"; // 2 means teacher Msk1
    courseTeacher[2][2] = "AuR"; // 3 means teacher AuR
    courseTeacher[2][3] = "HSM"; // 4 means teacher HSM
    courseTeacher[2][4] = "Sks"; // 5 means teacher Sks
    
    courseTime[2][0] = "8-9:30"; 
    courseTime[2][1] = "1-2:30"; 
    courseTime[2][2] = "2:40-4:10"; 
    courseTime[2][3] = "8-9:30"; 
    courseTime[2][4] = "4:20-5:50"; 

     // sections of course 4
     courseTeacher[2][0] = "SAR"; // 1 means teacher SAR
     courseTeacher[2][1] = "Msk1"; // 2 means teacher Msk1
     courseTeacher[2][2] = "AuR"; // 3 means teacher AuR
     courseTeacher[2][3] = "HSM"; // 4 means teacher HSM
     courseTeacher[2][4] = "Sks"; // 5 means teacher Sks
     
     courseTime[2][0] = "8-9:30"; 
     courseTime[2][1] = "1-2:30"; 
     courseTime[2][2] = "2:40-4:10"; 
     courseTime[2][3] = "8-9:30"; 
     courseTime[2][4] = "4:20-5:50"; 


    System.out.println("How do you want to log in? (1:Student/2:Teacher)");
    int a = in.nextInt();
    switch (a) {
      case 1:
        System.out.print("Enter your Student ID: ");
        int ID = in.nextInt();
        Arrays.binarySearch(studentID, ID);
        student();
        break;
      case 2:
        teacher();
      default:
        System.out.println("Invalid input!!!");
      break;
    }
    System.out.println("Hello Worrld");
    in.close();
  }
  private static void student() {
    System.out.println("What do you want to do?");
    System.out.println("1: Add course\n2: Remove course\n3: Show my courses");
    int a = in.nextInt();
    switch (a) {
      case 1:
        addCourse();
        break;
      case 2:
        removeCourse();
        break;
      case 3:
        showCourse();
        break;
      default:
        break;
    }
  }
  private static void teacher() {
    
  }
  public static void addCourse() {
    
  }
  public static void removeCourse() {
    
  }
  public static void showCourse() {
    
  }
}
