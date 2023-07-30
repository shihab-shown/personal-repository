package com.example.demo.restControler;

import org.springframework.beans.factory.annotation.Value;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class RestControler {
    @Value("${my.name}")
    private String name;
    @Value("${my.age}")
    private int age;
    @GetMapping("/")
    public String hello() {
        return "Hello " + name + " I am " + age + " years old";
    }

}
