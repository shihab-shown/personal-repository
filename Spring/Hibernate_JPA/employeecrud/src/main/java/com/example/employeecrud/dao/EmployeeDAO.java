package com.example.employeecrud.dao;

import com.example.employeecrud.entity.Employee;

import java.util.List;

public interface EmployeeDAO {
    Employee save(Employee employee);
    List<Employee> findAll();
    Employee findById(int id);
    void deleteById(int id);
    void deleteAll();
}
