import java.util.ArrayList;

public class CourseManagement {

    public static void main(String[] args) {
        while (true) {
            // Get session instance
            Session session = Session.getSession();

            System.out.print("Email: ");
            String email = session.inputScanner.nextLine();
            System.out.print("Password: ");
            String password = session.inputScanner.nextLine();

            try {
                User user = login(email, password);
                System.out.println("Login successful.");
                user.handleActions();
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
    }

    public static User login(String email, String password) throws Exception {
        Session session = Session.getSession();
        for (User user : session.getUserList()) {
            if (user.getEmail().equals(email) && user.getPassword().equals(password)) {
                return user;
            }
        }
        throw new Exception("User not found");
    }

    public static void addCourse(Student student, Course course) {
        student.addCourse(course);
    }

    public static void removeCourse(Student student, Course course) {
        student.removeCourse(course);
    }

    public static Course[] getEnrolledCourses(Student student) {
        ArrayList<Course> courses = student.getCourses();
        return courses.toArray(new Course[courses.size()]);
    }

    public static void addStudent(Course course, Student student) {
        course.addStudent(student);
    }

    public static void removeStudent(Course course, Student student) {
        course.removeStudent(student);
    }

    public static Student[] getStudentList(Course course) {
        ArrayList<Student> students = course.getStudents();
        return students.toArray(new Student[students.size()]);
    }
}
