#pragma once
#include <string>
class admin
{


protected:
    std::string Email,
        Name,
        password;

    // school information
    std::string schoolName,
        country,
        state,
        city;
    int pinCode, schoolId;

    // other information about total no of sutdent in school ;
    int totalStudent,
        educationLevel;
    std::string otherEducationLevel;

    // Employee data

    int employeeID,
        employeeAge,
        employeeSalary,
        employeeDob,
        employeeEdu,
        classTeacher,
        sectionOfClass,
        subjectTeacher;

    std::string employeeName;

    // student data

    int studentRollno,
        studentMarks,
        studentClass,
        studentSection;

    std::string studentName,
        fatherName,
        motherName,
        gardianName,
        parentPhoneNo,
        yearOfAdmission;

public:
    // login detail
    void addDetail() {};

    void restLoginDetail() {};

    void updateSchoolInfo() {};

    void addSchoolInfo() {};

    void addEmployeeData() {};

    void deleteEmployeeData() {};

    void updateEmployeeData() {};
};