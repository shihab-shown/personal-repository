create database mem:testdb;
create table course (
    id int auto_increment primary key,
    name varchar(255) not null,
    author varchar(255) not null,
);