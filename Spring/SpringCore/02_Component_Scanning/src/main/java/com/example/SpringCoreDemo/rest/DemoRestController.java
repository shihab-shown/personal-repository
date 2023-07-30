package com.example.SpringCoreDemo.rest;
import com.example.SpringCoreDemo.common.Coach;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class DemoRestController {
    private Coach coach;

    @Autowired
    public DemoRestController(@Qualifier("swimCoach") Coach coach){
        this.coach = coach;
    }

    @GetMapping("/")
    public String getDailyWorkout() {
        return coach.getDailyWorkout();
    }

}
