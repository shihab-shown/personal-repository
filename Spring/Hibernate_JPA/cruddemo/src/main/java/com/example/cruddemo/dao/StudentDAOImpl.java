package com.example.cruddemo.dao;
import com.example.cruddemo.entity.Student;
import jakarta.persistence.EntityManager;
import jakarta.persistence.TypedQuery;
import jakarta.transaction.Transactional;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository // Note: @Repository is used to indicate that this class is a DAO.
public class StudentDAOImpl implements StudentDAO{

    private EntityManager entityManager;

    @Autowired
    public StudentDAOImpl(EntityManager entityManager) {
        this.entityManager = entityManager;
    }

    @Override
    @Transactional // Note: @Transactional is used when we modify the database
    public void save(Student student) {
        entityManager.persist(student);
    }

    @Override
    public Student findById(int id) {
        return entityManager.find(Student.class, id);
    }

    @Override
    public List<Student> findAll() {
        TypedQuery<Student> query = entityManager.createQuery("from Student", Student.class);
        return query.getResultList();
    }

    @Override
    @Transactional
    public void update(Student student) {
        entityManager.merge(student);
    }

    @Override
    @Transactional
    public void delete(int id) {
        Student studentToDelete = entityManager.find(Student.class, id);
        entityManager.remove(studentToDelete);
    }

    @Override
    @Transactional
    public void deleteAll() {
        entityManager.createQuery("delete from Student").executeUpdate();
        entityManager.createNativeQuery("ALTER TABLE student AUTO_INCREMENT = 1").executeUpdate();
    }
}
