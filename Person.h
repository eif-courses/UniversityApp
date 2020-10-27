//
// Created by Marius on 10/27/2020.
//

#include <iostream>
#include "Address.h"

using namespace std;

#ifndef UNIVERSITYAPP_PERSON_H
#define UNIVERSITYAPP_PERSON_H


class Person{
private:
    string name;
    string email;
    int phoneNumber;
    Address address;
    bool isParkingPurchased;
public:
    Person(const string &name, const string &email, int phoneNumber, const Address &address);
    void purchaseParkingPass();
    bool isParkingAllowed();
    void printInfo();
    const string &getName() const;
    const string &getEmail() const;
    int getPhoneNumber() const;
    const Address &getAddress() const;
};


#endif //UNIVERSITYAPP_PERSON_H
