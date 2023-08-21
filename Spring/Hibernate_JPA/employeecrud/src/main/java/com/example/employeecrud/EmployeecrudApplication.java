package com.example.employeecrud;

import com.example.employeecrud.dao.EmployeeDAO;
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
	public CommandLineRunner runner(EmployeeDAO employeeDAO) {
		return args -> {
		  //createEmployee(employeeDAO);
			queryEmployee(employeeDAO);
		};
	}

	private void queryEmployee(EmployeeDAO employeeDAO) {
		List<Employee> employees=employeeDAO.findAll();
		for(Employee employee:employees) {
			System.out.println(employee);
		}
	}


}
