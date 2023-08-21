import java.util.ArrayList;

class Course {
    private String name;
    private ArrayList<Student> students;

    public Course(String name) {
        this.name = name;
        this.students = new ArrayList<>();
    }

    public String getName() {
        return name;
    }

    public ArrayList<Student> getStudents() {
        return students;
    }

    public void addStudent(Student student) {
        if (students.size() < 5 && !students.contains(student)) {
            students.add(student);
            System.out.println("Student added successfully.");
        } else {
            System.out.println("Error adding student.");
        }
    }

    public void removeStudent(Student student) {
        if (students.contains(student)) {
            students.remove(student);
            System.out.println("Student removed successfully.");
        } else {
            System.out.println("Error removing student.");
        }
    }

    public void viewStudentList() {
        if (students.isEmpty()) {
            System.out.println("No students enrolled in this course.");
        } else {
            System.out.println("Students enrolled in this course:");
            for (Student student : students) {
                System.out.println(student.getName());
            }
        }
    }
}
