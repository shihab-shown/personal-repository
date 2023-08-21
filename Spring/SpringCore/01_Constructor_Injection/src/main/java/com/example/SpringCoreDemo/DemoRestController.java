package com.example.SpringCoreDemo;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class DemoRestController {
    private Coach coach;
    @Autowired
    public DemoRestController(Coach coach) {
        this.coach = coach;
    }
    @GetMapping("/")
    public String getDailyWorkout() {
        return coach.getDailyWorkout();
    }
}
