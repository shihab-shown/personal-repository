package com.example.employeecrud.service;

import com.example.employeecrud.dao.EmployeeDAO;
import com.example.employeecrud.entity.Employee;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Service
public class EmployeeServiceImpl implements EmployeeService {

    private EmployeeDAO employeeDAO;
    @Autowired
    // constructor injection
    public EmployeeServiceImpl(EmployeeDAO employeeDAO) {
        this.employeeDAO=employeeDAO;
    }

    @Override
    @Transactional
    public Employee save(Employee employee) {
        return employeeDAO.save(employee);
    }

    @Override
    public List<Employee> findAll() {
        return employeeDAO.findAll();
    }

    @Override
    public Employee findById(int id) {
    return employeeDAO.findById(id);
    }

    @Override
    @Transactional
    public void deleteById(int id) {
        employeeDAO.deleteById(id);
    }

    @Override
    @Transactional
    public void deleteAll() {
        employeeDAO.deleteAll();
    }
}
