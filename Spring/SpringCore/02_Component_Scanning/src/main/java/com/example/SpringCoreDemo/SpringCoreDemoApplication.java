package com.example.SpringCoreDemo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

//@SpringBootApplication(scanBasePackages = {"com.example.util", "com.example.SpringCoreDemo"})
@SpringBootApplication
public class SpringCoreDemoApplication {

	public static void main(String[] args) {
		SpringApplication.run(SpringCoreDemoApplication.class, args);
	}

}
