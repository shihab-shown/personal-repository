package com.example.SpringCoreDemo.common;

import jakarta.annotation.PostConstruct;
import jakarta.annotation.PreDestroy;
import org.springframework.beans.factory.config.ConfigurableBeanFactory;
import org.springframework.context.annotation.Lazy;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component
@Lazy

public class FootballCoach implements Coach{
    public FootballCoach() {
        System.out.println("FootballCoach: inside no-arg constructor");
    }
    @PostConstruct
    public void doMyStartupStuff(){
        System.out.println("FootballCoach: inside method doMyStartupStuff");
    }
    @PreDestroy
    public void doMyCleanupStuff(){
        System.out.println("FootballCoach: inside method doMyCleanupStuff");
    }
    @Override
    public String getDailyWorkout() {
        return "Practice your free kick for 15 minutes!!!!!";
    }
}
