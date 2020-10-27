//
// Created by Marius on 10/27/2020.
//

#include "Address.h"
#include <iostream>
using namespace std;

bool Address::validate(Address address) {

    if (address.city.size() > 5 && address.country.size() > 4 && address.postal > 4) {
        return true;
    } else {
        return false;
    }
}

void Address::printLabel(Address address) {


    if(validate(address)){
        cout << "PRINTING........................."<< endl;

        cout << "==================PARKING TICKET=========================="<< endl;
        cout << "STREET: "<< address.country << endl;
        cout << "STREET: "<< address.city << endl;
        cout << "STREET: "<< address.street << endl;
        cout << "STREET: "<< address.postal << endl;
        cout << "====================================================="<< endl;
    }else{
        cout << "Your address is not valid not possible to print ticket!"<< endl;
    }



}

void Address::setStreet(const string &street) {
    Address::street = street;
}

void Address::setCity(const string &city) {
    Address::city = city;
}

void Address::setCountry(const string &country) {
    Address::country = country;
}

void Address::setPostal(int postal) {
    Address::postal = postal;
}
