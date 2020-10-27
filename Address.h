//
// Created by Marius on 10/27/2020.
//
#include <iostream>
using namespace std;

#ifndef UNIVERSITYAPP_ADDRESS_H
#define UNIVERSITYAPP_ADDRESS_H



class Address {
private:
    string street;
    string city;
    string country;
    int postal;
    bool validate(Address address);
public:
    void printLabel(Address address);

    void setStreet(const string &street);

    void setCity(const string &city);

    void setCountry(const string &country);

    void setPostal(int postal);


};


#endif //UNIVERSITYAPP_ADDRESS_H
