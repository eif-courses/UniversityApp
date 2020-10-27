//
// Created by Marius on 10/27/2020.
//

#ifndef UNIVERSITYAPP_PROFESSOR_H
#define UNIVERSITYAPP_PROFESSOR_H


#include "Person.h"

class Professor : public Person{

private:
    double salary;
public:
    Professor(const string &name, const string &email, int phoneNumber, const Address &address);
    double getSalary() const;
    void setSalary(double salary);
};


#endif //UNIVERSITYAPP_PROFESSOR_H
