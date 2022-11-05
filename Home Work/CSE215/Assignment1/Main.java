import java.util.*;

public class Main {
  static Scanner in = new Scanner(System.in);
  static boolean[][] selectedCourse = new boolean[5][3];
  static boolean[][] selectedSection = new boolean[5][3];
  static int[][] selectedSectionNo = new int[5][3];
  static String[][] courseTeacher = new String[3][3];
  static String[][] courseTime = new String[3][3];
  static String[] courseName = new String[3];
  static int[] studentID = new int[5];
  static String[] studentName = new String[5];
  static String[] teacherTime = new String[6];
  static String[] teacherID = new String[6];
  static Map<Integer, String> selectedStudent = new HashMap<Integer, String>();

  public static void main(String[] args) {
    // There will be 4 courses and each of them will have 5 sections

    // sections of course 1 [CSE115]
    courseTeacher[0][0] = "SAR";
    courseTeacher[0][1] = "Msk1";
    courseTeacher[0][2] = "AuR";

    courseTime[0][0] = "8-9:30";
    courseTime[0][1] = "1-2:30";
    courseTime[0][2] = "2:40-4:10";

    // sections of course 2 [CSE215]
    courseTeacher[1][0] = "HSM";
    courseTeacher[1][1] = "MaY";
    courseTeacher[1][2] = "SAR";

    courseTime[1][0] = "2:40-4:10";
    courseTime[1][1] = "8-9:30";
    courseTime[1][2] = "2:40-4:10";

    // sections of course 3 [CSE225]
    courseTeacher[2][0] = "AuR";
    courseTeacher[2][1] = "TAA";
    courseTeacher[2][2] = "Msk1";

    courseTime[2][0] = "11:20-12:50";
    courseTime[2][1] = "9:40-11:10";
    courseTime[2][2] = "4:20-5:50";

    // Course Name
    courseName[0] = "CSE115";
    courseName[1] = "CSE215";
    courseName[2] = "CSE225";

    // Student informations

    // Student IDs
    studentID[0] = 22149042;
    studentID[1] = 21249112;
    studentID[2] = 22139043;
    studentID[3] = 20145047;
    studentID[4] = 21379041;

    // Student Names
    studentName[0] = "Shihab";
    studentName[1] = "Shown";
    studentName[2] = "Siam";
    studentName[3] = "Bishal";
    studentName[4] = "Shuvo";
    Arrays.sort(studentID);

    // Teacher informations
    teacherTime[0] = "Course: CSE115.1  Time: 8-9:30\nCourse: CSE215.3  Time: 2:40-4:10";
    teacherTime[1] = "Course: CSE115.2  Time: 1-2:30\nCourse: CSE225.3  Time: 4:20-5:50";
    teacherTime[2] = "Course: CSE115.3  Time: 2:40-4:10\nCourse: CSE225.1  Time: 11:20-12:50";
    teacherTime[3] = "Course: CSE215.1  Time: 2:40-4:10";
    teacherTime[4] = "Course: CSE215.2  Time: 8-9:30";
    teacherTime[5] = "Course: CSE225.2  Time: 9:40-11:10";

    teacherID[0] = "SAR";
    teacherID[1] = "Msk1";
    teacherID[2] = "AuR";
    teacherID[3] = "HSM";
    teacherID[4] = "MaY";
    teacherID[5] = "TAA";

    menuPrint();
    for (int i = 0; i < 5; i++) {
      System.out.println(studentID[i]+" "+studentName[i]);
    }
    System.out.println("Thanks for using me. Have a nice day.");
    in.close();
  }

  private static void menuPrint() {
    System.out.println("How do you want to log in? (1:Student/2:Teacher)");
    int a = in.nextInt();
    switch (a) {
      case 1:
        System.out.print("Enter your Student ID: ");
        int ID = in.nextInt();
        int index = Arrays.binarySearch(studentID, ID);
        if (index < 0) {
          System.out.println("Incorrect Student ID!!!");
          break;
        }
        student(index);
        break;
      case 2:
        teacher();
        break;
      default:
        System.out.println("Invalid input!!!");
        break;
    }
  }

  public static void student(int index) {
    System.out.println("What do you want to do?");
    System.out.println("1: Add course\n2: Remove course\n3: Show my courses");
    int a = in.nextInt();
    switch (a) {
      case 1:
        addCourse(index);
        break;
      case 2:
        removeCourse(index);
        break;
      case 3:
        showCourse(index);
        break;
      default:
        break;
    }
  }

  private static void teacher() {
    int input, b = 0;
    System.out.println("Enter your Teacher ID");
    in.nextLine();
    String a = in.nextLine();
    for (int i = 0; i < 6; i++) {
      if (teacherID[i].equals(a)) {
        System.out.println(teacherTime[i]);
        b++;
        System.out.println("Your Students:");
        for (Integer key : selectedStudent.keySet()) {
          if (selectedStudent.get(key).equals(teacherID[i])) {
            System.out.println("Student Name: " + studentName[key] + "  ID: " + studentID[key]);
          }
          break;
        }
      }
    }
    if (b == 0)
      System.out.println("Incorrect Teacher ID!!!");
    System.out.println("Do you want to continue? (1:YES | 0:NO)");
    input = in.nextInt();
    if (input == 1) {
      menuPrint();
    } else {
      return;
    }
  }

  public static void addCourse(int index) {
    System.out.println("Select a course: \n1:CSE115\n2:CSE215\n3:CSE225");
    int course = in.nextInt();
    if (selectedCourse[index][course - 1] == true) {
      System.out.println("This course is already selected...");
      return;
    }
    selectedCourse[index][course - 1] = true;
    System.out.println("Select section: (1/2/3)");
    int section = in.nextInt();
    selectedSection[index][section - 1] = true;
    selectedSectionNo[index][course - 1] = section - 1;
    selectedStudent.putIfAbsent(index, courseTeacher[course - 1][section - 1]);
    System.out.println("Do you want to add another course? (1:YES | 0:NO)");
    int a = in.nextInt();
    if (a == 1) {
      addCourse(index);
    } else {
      menuPrint();
    }
  }

  public static void removeCourse(int index) {
    System.out.println("Which course you want to remove?");
    int course = in.nextInt();
    selectedCourse[index][course - 1] = false;
    selectedStudent.remove(course-1);
    System.out.println("Do you want to remove another course? (1:YES | 0:NO)");
    int a = in.nextInt();
    if (a == 1) {
      removeCourse(index);
    } else {
      menuPrint();
    }
  }

  public static void showCourse(int index) {
    for (int i = 0; i < 3; i++) {
      if (selectedCourse[index][i] == true) {
        System.out.println(
            (i + 1) + ". Course Name: " + courseName[i] + " Timing: " + courseTime[i][selectedSectionNo[index][i]]
                + " Faculty: " + courseTeacher[i][selectedSectionNo[index][i]]);
      }
    }
    System.out.println("Do you want to continue? (1:YES | 0:NO)");
    int a = in.nextInt();
    if (a == 1) {
      menuPrint();
    } else {
      return;
    }
  }
}
