import java.util.ArrayList;
import java.util.Scanner;

public class Teacher extends User implements Action {
    private ArrayList<Course> courses;

    public Teacher(String email, String password, String name) {
        super(email, password, name, "teacher");
        this.courses = new ArrayList<>();
    }

    public ArrayList<Course> getCourses() {
        return courses;
    }

    public void addCourse(Course course) {
        if (!courses.contains(course)) {
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
            System.out.println("You are not assigned to any courses.");
        } else {
            System.out.println("Assigned courses:");
            for (Course course : courses) {
                System.out.println(course.getName());
            }
        }
    }

    public void addStudent(Course course, Student student) {
        if (courses.contains(course)) {
            course.addStudent(student);
        } else {
            System.out.println("Error adding student.");
        }
    }

    public void removeStudent(Course course, Student student) {
        if (courses.contains(course)) {
            course.removeStudent(student);
        } else {
            System.out.println("Error removing student.");
        }
    }

    public void viewStudentList(Course course) {
        if (courses.contains(course)) {
            course.viewStudentList();
        } else {
            System.out.println("Error viewing student list.");
        }
    }

    @Override
    public void handleActions() {
        while (true) {
            System.out.println("What would you like to do?");
            System.out.println("1. Add a course");
            System.out.println("2. Remove a course");
            System.out.println("3. View enrolled courses");
            System.out.println("4. Add a student to a course");
            System.out.println("5. Remove a student from a course");
            System.out.println("6. View student list for a course");
            System.out.println("7. Logout");

            Scanner inputScanner = new Scanner(System.in);

            int choice = inputScanner.nextInt();
            inputScanner.nextLine();

            if (choice == 1) {
                System.out.print("Enter course name: ");
                String courseName = inputScanner.nextLine();
                Course course = new Course(courseName);
                addCourse(course);
            } else if (choice == 2) {
                System.out.print("Enter course name: ");
                String courseName = inputScanner.nextLine();
                Course course = new Course(courseName);
                removeCourse(course);
            } else if (choice == 3) {
                viewEnrolledCourses();
            } else if (choice == 4) {
                System.out.print("Enter course name: ");
                String courseName = inputScanner.nextLine();
                System.out.print("Enter student email: ");
                String email = inputScanner.nextLine();
                User user = Session.getSession().getUser(email);
                if (user instanceof Student) {
                    addStudent(new Course(courseName), (Student) user);
                } else {
                    System.out.println("Error adding student.");
                }
            } else if (choice == 5) {
                System.out.print("Enter course name: ");
                String courseName = inputScanner.nextLine();
                System.out.print("Enter student email: ");
                String email = inputScanner.nextLine();
                User user = Session.getSession().getUser(email);
                if (user instanceof Student) {
                    removeStudent(new Course(courseName), (Student) user);
                } else {
                    System.out.println("Error removing student.");
                }
            } else if (choice == 6) {
                System.out.print("Enter course name: ");
                String courseName = inputScanner.nextLine();
                viewStudentList(new Course(courseName));
            } else if (choice == 7) {
                logout();
                break;
            } else {
                System.out.println("Invalid choice.");
            }
        }
    }
}