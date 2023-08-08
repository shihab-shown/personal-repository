package com.example.employeecrud;

import com.example.employeecrud.dao.EmployeeRepository;
import com.example.employeecrud.entity.Employee;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;

import java.util.List;

@SpringBootApplication
public class EmployeecrudApplication {

	public static void main(String[] args) {
		SpringApplication.run(EmployeecrudApplication.class, args);
	}
	@Bean
	public CommandLineRunner runner(EmployeeRepository employeeRepository) {
		return args -> {
		  //createEmployee(employeeDAO);
			queryEmployee(employeeRepository);
		};
	}

	private void queryEmployee(EmployeeRepository employeeRepository) {
		List<Employee> employees=employeeRepository.findAll();
		for(Employee employee:employees) {
			System.out.println(employee);
		}
	}

}
