package com.todoApp;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class HelloRestController {
    @GetMapping("/hello-world")
    public String hello() {
        return "Welcome to Todo App!";
    }
    @GetMapping("/hello-world/path-variable/{username}")
    public String helloWorldPathVariable(@PathVariable String username) {
        return String.format("Hello World, %s", username);
    }
}
