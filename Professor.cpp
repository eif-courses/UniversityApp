//
// Created by Marius on 10/27/2020.
//

#include "Professor.h"

Professor::Professor(const string &name, const string &email, int phoneNumber, const Address &address) : Person(name,
                                                                                                                email,
                                                                                                                phoneNumber,
                                                                                                                address) {}

double Professor::getSalary() const {
    return salary;
}

void Professor::setSalary(double salary) {
    Professor::salary = salary;
}
