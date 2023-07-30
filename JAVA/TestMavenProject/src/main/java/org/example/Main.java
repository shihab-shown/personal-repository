package org.example;

import com.github.javafaker.Faker;

public class Main {
    public static void main(String[] args) {
        System.out.print("Hello ");
        Faker faker = new Faker();
        System.out.println(faker.name().firstName());
    }
}