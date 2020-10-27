//
// Created by Marius on 10/27/2020.
//

#ifndef UNIVERSITYAPP_STUDENT_H
#define UNIVERSITYAPP_STUDENT_H


#include "Person.h"

class Student : public Person{
private:
    int studentNumber;
    double averageMark;
    int seminarsTaken;
    bool isEligleToRoll;
public:
    Student(const string &name, const string &email, int phoneNumber, const Address &address);

    int getStudentNumber() const;
    double getAverageMark() const;
    void setStudentNumber(int studentNumber);
    void setAverageMark(double averageMark);

    bool isAbleToAttendSeminar();

    int getSeminarsTaken() const;

    void setSeminarsTaken(int seminarsTaken);

    bool isEligleToRoll1() const;

    void setIsEligleToRoll(bool isEligleToRoll);


};


#endif //UNIVERSITYAPP_STUDENT_H
