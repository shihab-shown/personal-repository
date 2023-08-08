package com.luv2code.springboot.cruddemo.security;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.http.HttpMethod;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.core.userdetails.User;
import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.security.provisioning.InMemoryUserDetailsManager;
import org.springframework.security.provisioning.JdbcUserDetailsManager;
import org.springframework.security.provisioning.UserDetailsManager;
import org.springframework.security.web.SecurityFilterChain;

import javax.sql.DataSource;

@Configuration
public class DemoSecurityConfig {

    // This is the old way of doing it, but it still works.
    //    @Bean
//    public InMemoryUserDetailsManager inMemoryUserDetailsManager() {
//        UserDetails John = User.builder()
//                .username("John")
//                .password("{noop}john123")
//                .roles("EMPLOYEE")
//                .build();
//        UserDetails Mary = User.builder()
//                .username("Mary")
//                .password("{noop}mary123")
//                .roles("MANAGER")
//                .build();
//        UserDetails Susan = User.builder()
//                .username("Susan")
//                .password("{noop}susan123")
//                .roles("EMPLOYEE","MANAGER","ADMIN")
//                .build();
//        return new InMemoryUserDetailsManager(John,Mary,Susan);
//    }
//

    // This is the new way of doing it.
    // Add support for JDBC authentication
    @Bean
    public UserDetailsManager userDetailsManager(DataSource dataSource) {
        return new JdbcUserDetailsManager(dataSource);
    }
    @Bean
    public SecurityFilterChain filterChain(HttpSecurity http) throws Exception {
        http.authorizeHttpRequests(config ->
                config
                        .requestMatchers(HttpMethod.GET,"/api/employees/**").hasRole("EMPLOYEE")
                        .requestMatchers(HttpMethod.GET,"/api/employees").hasRole("EMPLOYEE")
                        .requestMatchers(HttpMethod.POST,"/api/employees").hasAnyRole("MANAGER","ADMIN")
                        .requestMatchers(HttpMethod.PUT,"/api/employees/**").hasAnyRole("MANAGER","ADMIN")
                        .requestMatchers(HttpMethod.DELETE,"/api/employees/**").hasRole("ADMIN")
        );
        http.httpBasic(); // use basic authentication
        // disable csrf and frame options
        http.csrf().disable();
        return http.build();
    }
}
