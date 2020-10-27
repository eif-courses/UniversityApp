//
// Created by Marius on 10/27/2020.
//

#include "Student.h"

Student::Student(const string &name, const string &email, int phoneNumber, const Address &address) : Person(name, email,
                                                                                                            phoneNumber,
                                                                                                            address) {}

int Student::getStudentNumber() const {
    return studentNumber;
}

double Student::getAverageMark() const {
    return averageMark;
}

void Student::setStudentNumber(int studentNumber) {
    Student::studentNumber = studentNumber;
}

void Student::setAverageMark(double averageMark) {
    Student::averageMark = averageMark;
}

int Student::getSeminarsTaken() const {
    return seminarsTaken;
}

void Student::setSeminarsTaken(int seminarsTaken) {
    Student::seminarsTaken = seminarsTaken;
}

bool Student::isEligleToRoll1() const {
    return isEligleToRoll;
}

void Student::setIsEligleToRoll(bool isEligleToRoll) {
    Student::isEligleToRoll = isEligleToRoll;
}

bool Student::isAbleToAttendSeminar() {
    if( (seminarsTaken > 5 && averageMark > 6) || averageMark > 9){
        return true;
    } else{
        return false;
    }
}




