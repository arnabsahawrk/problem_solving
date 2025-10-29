CREATE DATABASE Employee;

USE employee;

CREATE TABLE employee(
   EmployeeId INT AUTO_INCREMENT PRIMARY KEY,
   EmployeeName VARCHAR(50),
   EmployeeSalary DECIMAL(10, 2),
   JoiningDate DATE
);

DROP TABLE employee;

CREATE TABLE employees(
   EmployeeId INT AUTO_INCREMENT PRIMARY KEY,
   EmployeeName VARCHAR(50),
   EmployeeSalary DECIMAL(10, 2),
   JoiningDate DATE
);

INSERT INTO employees(EmployeeName, EmployeeSalary, JoiningDate) VALUES("Arnab", 500000.50, "2025-03-01");
INSERT INTO employees(EmployeeName, EmployeeSalary, JoiningDate) VALUES("Joy Das", 50000.50, "2024-02-01");

DELETE FROM employees WHERE EmployeeId = 2;

SET SQL_SAFE_UPDATES = 0;
UPDATE employees SET EmployeeName = "Arnab Saha" WHERE EmployeeName = "Arnab";
SET SQL_SAFE_UPDATES = 1;