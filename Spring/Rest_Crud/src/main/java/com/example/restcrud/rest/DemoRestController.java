package com.example.restcrud.rest;

import com.example.restcrud.entity.Student;
import com.github.javafaker.Faker;
import jakarta.annotation.PostConstruct;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/api")
public class DemoRestController {
    @RequestMapping("/hello")
    public String sayHello() {
        return "Hello World";
    }

    private List<Student> students;

    @PostConstruct
    public void loadData() {
        students = new ArrayList<>();
        Faker faker = new Faker();
        students.add(new Student(faker.name().firstName(), faker.name().lastName()));
        students.add(new Student(faker.name().firstName(), faker.name().lastName()));
    }

    @GetMapping("/students")
    public List<Student> getStudents() {
//        return List.of(
//            new Student("John", "Doe"),
//            new Student("Jane", "Foster")
//        );
//        List<Student> students = new ArrayList<>();
//        students.add(new Student("John", "Doe"));
//        students.add(new Student("Jane", "Foster"));
        return students;
    }

    @GetMapping("/students/{studentId}")
    public Student getStudent(@PathVariable int studentId) {
        if (studentId >= students.size() || studentId < 0)
            throw new StudentNotFoundException("Student id not found - " + studentId);
        return students.get(studentId);
    }
/*
    // Add an exception handler using @ExceptionHandler
    @ExceptionHandler
    public ResponseEntity<StudentErrorResponse> handleException(StudentNotFoundException exc) {
        // create a StudentErrorResponse
        StudentErrorResponse error = new StudentErrorResponse();
        error.setStatus(HttpStatus.NOT_FOUND.value());
        error.setMesssage(exc.getMessage());
        error.setTimeStamp(System.currentTimeMillis());
        // return ResponseEntity
        return new ResponseEntity<>(error, HttpStatus.NOT_FOUND);
    }

    @ExceptionHandler
    public ResponseEntity<StudentErrorResponse> handleException(Exception exc) {
        // create a StudentErrorResponse
        StudentErrorResponse error = new StudentErrorResponse();
        error.setStatus(HttpStatus.BAD_REQUEST.value());
        error.setMesssage("Bad Request");
        error.setTimeStamp(System.currentTimeMillis());
        // return ResponseEntity
        return new ResponseEntity<>(error, HttpStatus.BAD_REQUEST);
    }
 */
}
