package com.example.employeecrud.service;

import com.example.employeecrud.entity.Employee;

import java.util.List;

public interface EmployeeService {
    Employee save(Employee employee);
    List<Employee> findAll();
    Employee findById(Integer id);
    void deleteById(int id);
    void deleteAll();
}
