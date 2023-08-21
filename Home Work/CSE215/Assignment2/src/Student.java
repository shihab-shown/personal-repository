import java.util.ArrayList;
import java.util.Scanner;

class Student extends User implements Action {
    private ArrayList<Course> courses;

    public Student(String email, String password, String name) {
        super(email, password, name, "student");
        this.courses = new ArrayList<>();
    }

    public ArrayList<Course> getCourses() {
        return courses;
    }

    public void addCourse(Course course) {
        if (courses.size() < 5 && !courses.contains(course)) {
            courses.add(course);
            System.out.println("Course added successfully.");
        } else {
            System.out.println("Error adding course.");
        }
    }

    public void removeCourse(Course course) {
        if (courses.contains(course)) {
            courses.remove(course);
            System.out.println("Course removed successfully.");
        } else {
            System.out.println("Error removing course.");
        }
    }

    public void viewEnrolledCourses() {
        if (courses.isEmpty()) {
            System.out.println("You are not enrolled in any courses.");
        } else {
            System.out.println("Enrolled courses:");
            for (Course course : courses) {
                System.out.println(course.getName());
            }
        }
    }

    @Override
    public void handleActions() {
        while (true) {
            System.out.println("What would you like to do?");
            System.out.println("1. Add a course");
            System.out.println("2. Remove a course");
            System.out.println("3. View enrolled courses");
            System.out.println("4. Logout");
            Scanner inputScanner = new Scanner(System.in);
            int choice = inputScanner.nextInt();
            inputScanner.nextLine();

            if (choice == 1) {
                // Add a course
                System.out.print("Enter course name: ");
                String courseName = inputScanner.nextLine();
                Course course = new Course(courseName);
                CourseManagement.addCourse(this, course);
            } else if (choice == 2) {
                // Remove a course
                System.out.print("Enter course name: ");
                String courseName = inputScanner.nextLine();
                Course course = new Course(courseName);
                CourseManagement.removeCourse(this, course);
            } else if (choice == 3) {
                viewEnrolledCourses();
            } else if (choice == 4) {
                logout();
                break;
            } else {
                System.out.println("Invalid choice.");
            }
        }
    }

}
