#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include "PersonalComputer.h"
#include "Cashier.h"

int main() {

    Address address;

    address.setCity("Vilnius");
    address.setCountry("Lithuania");
    address.setStreet("Jasinskio g. 15");
    address.setPostal(12313);



    PersonalComputer pc;
    Student peter("Peter", "peter@gmail.com", 8523232, address);
    Professor profesor("Onyx", "onyx@gmail.com", 213213123, address);


    profesor.setSalary(2000);

    Cashier cashier;
    cashier.payout(profesor.getSalary());

    pc.printLabelForParking(peter.getAddress());
    peter.setSeminarsTaken(6);
    peter.setAverageMark(7);


   if(peter.isAbleToAttendSeminar()){
       cout << "PETER IS ABLE TO ATTEND!!! :)";
   }else{
       cout << "PETER CANT : (";
   }





























    return 0;
}
