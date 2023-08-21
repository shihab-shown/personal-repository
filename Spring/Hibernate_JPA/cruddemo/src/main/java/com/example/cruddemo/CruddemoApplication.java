package com.example.cruddemo;
import com.example.cruddemo.dao.StudentDAO;
import com.example.cruddemo.entity.Student;
import com.github.javafaker.Faker;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;
import java.util.List;

@SpringBootApplication
public class CruddemoApplication {

	public static void main(String[] args) {
		SpringApplication.run(CruddemoApplication.class, args);
	}
	@Bean // Note: @Bean is used to indicate that this method returns an object that should be registered as a bean in the Spring application context.
	public CommandLineRunner commandLineRunner(StudentDAO studentDAO) {
		return runner ->
		{
			//createStudent(studentDAO);
			//readStudent(studentDAO);
			deleteStudent(studentDAO);
			//queryStudent(studentDAO);
			//updateStudent(studentDAO);
		};
	}


	private void createStudent(StudentDAO studentDAO) {
		System.out.println("Creating student");
		Faker faker = new Faker();
		Student student = new Student(faker.name().firstName(), faker.name().lastName(), faker.internet().emailAddress());
		System.out.println("Saving student");
		studentDAO.save(student);
		System.out.println("Saved student"+student.getId());
	}
	public void queryStudent(StudentDAO studentDAO) {
		System.out.println("Querying student");
		List<Student> studentList = studentDAO.findAll();
		for(Student student: studentList) {
			System.out.println(student);
		}
	}

	public void readStudent(StudentDAO studentDAO) {
		System.out.println("Reading student");
		Student student = studentDAO.findById(1);
		System.out.println("Student: "+student.getLastName());
	}

	public void updateStudent(StudentDAO studentDAO) {
		System.out.println("Updating student");
		Student student = studentDAO.findById(10);
		student.setFirstName("Jane");
		student.setLastName("Foster");
		studentDAO.update(student);
		System.out.println("Updated student");
	}

	public void deleteStudent(StudentDAO studentDAO) {
		System.out.println("Deleting student");
		studentDAO.delete(3);
		//studentDAO.deleteAll();
	}
}
