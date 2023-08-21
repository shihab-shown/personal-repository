package com.example.employeecrud.dao;

import com.example.employeecrud.entity.Employee;
import jakarta.persistence.EntityManager;
import jakarta.persistence.TypedQuery;
import jakarta.transaction.Transactional;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public class EmployeeDAOImpl implements EmployeeDAO{

    EntityManager entityManager;
    @Autowired
    public EmployeeDAOImpl(EntityManager entityManager) {
        this.entityManager=entityManager;
    }
    @Override
    @Transactional
    public Employee save(Employee employee) {
        Employee dbEmployee=entityManager.merge(employee);
        return dbEmployee;
    }

    @Override
    public List<Employee> findAll() {
        TypedQuery<Employee> query=entityManager.createQuery("from Employee", Employee.class);
        List<Employee> employees=query.getResultList();
        return employees;
    }

    @Override
    public Employee findById(int id) {
        return entityManager.find(Employee.class, id);
    }

    @Override
    public void deleteById(int id) {
        Employee employee=findById(id);
        entityManager.remove(employee);
    }


    @Override
    public void deleteAll() {
        entityManager.createQuery("delete from Employee").executeUpdate();
        entityManager.createNativeQuery("ALTER TABLE employee AUTO_INCREMENT=1").executeUpdate();
    }
}
