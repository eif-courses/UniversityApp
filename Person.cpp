//
// Created by Marius on 10/27/2020.
//

#include "Person.h"
#include <iostream>
using namespace std;

const string &Person::getName() const {
    return name;
}

const string &Person::getEmail() const {
    return email;
}

int Person::getPhoneNumber() const {
    return phoneNumber;
}

const Address &Person::getAddress() const {
    return address;
}

void Person::purchaseParkingPass() {
    isParkingPurchased = true;
}
void Person::printInfo() {
    if(isParkingPurchased) {
        cout << "================================================================"<<endl;
        cout << "Details-> name:" << name << " email: " << email << " phone: " << phoneNumber << endl;
        cout << "Parking is purchased!"<<endl;
        cout << "================================================================"<<endl;
    }else{
        cout << "================================================================"<<endl;
        cout << "Details-> name:" << name << " email: " << email << " phone: " << phoneNumber << endl;
        cout << "Parking is not purchased!"<<endl;
        cout << "================================================================"<<endl;
        cout << "Maybe you would like to purchase parking? y/n"<<endl;
        char input;
        cin >> input;
        if(input == 'y'){
            purchaseParkingPass();
            cout << "Successfully completed!!! you now able to park your car :)"<<endl;
        }else{
            cout << "Goodbye!"<<endl;
        }
    }

    }

bool Person::isParkingAllowed() {
    return isParkingPurchased;
}

Person::Person(const string &name, const string &email, int phoneNumber, const Address &address) : name(name),
                                                                                                   email(email),
                                                                                           phoneNumber(phoneNumber),
                                                                                                   address(address) {



    isParkingPurchased = false;
    cout << "Person created!!!"<< endl;

}

