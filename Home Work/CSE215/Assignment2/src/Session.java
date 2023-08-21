import java.util.Scanner;

public class Session {
    private static Session session = null;
    private User[] userList = new User[7];
    private Course[] courseList = new Course[6];
Scanner inputScanner = new Scanner(System.in);
    private Session() {
        createDatabase();
    }

    private static void createDatabase() {
        // Place your database building code here
    }

    public static Session getSession() {
        if (session == null) {
            session = new Session();
        }
        return session;
    }

    public Course[] getCourseList() {
        return courseList;
    }

    public User[] getUserList() {
        return userList;
    }
    public User getUser(String email) {
        for (User user : userList) {
            if (user.getEmail().equals(email)) {
                return user;
            }
        }
        return null;
    }
}