CREATE DATABASE M3;

USE m3;

CREATE TABLE Student
(
  Roll CHAR(4) PRIMARY KEY,
  Name VARCHAR(50) NOT NULL,
  Email VARCHAR(30) UNIQUE,
  Address VARCHAR(100) DEFAULT("Bangladesh"),
  Age INT CHECK(Age > 10)
);

INSERT INTO Student(Roll, Name, Email, Address, Age) VALUE("0001", "Arnab", "arnab@gmail.com", "Dhaka", 26);

INSERT INTO Student(Roll, Name, Email, Age) VALUE("0002", "Arnab", "arnab1@gmail.com", 26);

CREATE TABLE Library
(
  BookName VARCHAR(30) PRIMARY KEY,
  WhoBorrowed_Roll CHAR(4),
  FOREIGN KEY(WhoBorrowed_Roll) REFERENCES Student(Roll)
);

CREATE TABLE Course
(
    CourseName VARCHAR(10),
    University VARCHAR(10),
    Credit INT,
    
    PRIMARY KEY(CourseName, University)
);

SELECT name, email FROM Student;

SELECT * FROM Student;

SELECT email FROM Student WHERE Roll = "0001";

SELECT 100+5607;

SELECT DISTINCT Name FROM Student;

SELECT Email FROM Student ORDER BY Email DESC;